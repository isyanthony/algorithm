#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define sz sizeof
#define pb push_back
#define mms memset
#define LL long long
#define FAST ios::sync_with_stdio(false) , cin.tie(0) , cout.tie(0)
#define rep(i , a , b) for(int i=a;i<=b;i++)
#define per(i , a , b) for(int i=a;i>=b;i--)
const int INF = 0x3f3f3f3f;
const int MINF = 0x3f;

const int N = 28;

int T , n;
int len[N];
string str;

int main(){
	FAST;
	cin >> T;
	while(T--){
		mms(len , 0 , sz len);
		cin >> n;
		rep(i , 0 , n - 1){
			cin >> str;
			len[str.back() - 'a'] = max(len[str.back() - 'a'] , len[str.front() - 'a'] + (int)str.length());
		}
		int ans = 0;
		rep(i , 0 , 25) ans = max(ans , len[i]);
		cout << ans << endl; 
	}
	return 0;

}