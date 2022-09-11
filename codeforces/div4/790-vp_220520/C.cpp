#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define pb push_back
#define mm memset
#define PII pair<int,int>
#define SZ size()
#define LL long long
#define FAST ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define rep(i,a,b) for(int i=a;i<=b;++i)
#define per(i,a,b) for(int i=a;i>=b;--i)
const int INF = 0x3f3f3f3f;
const int MINF = 0x3f;
const double EPS = 1e-6;
const int N = 1e7 + 10;
string s[N];
int main(){
	FAST;
	int T;
	cin >> T;
	while(T--){
		int n , len;
		cin >> n >> len;
		rep(i , 0 , n - 1){
			cin >> s[i];
		}
		int Min = 0x3f3f3f3f;
		per(i , n - 1 , 1){
			per(j , i - 1 , 0){
				int temp = 0;
				rep(k , 0 , len - 1){
					if(s[i][k] != s[j][k]) temp += abs((s[i][k] - '0') - (s[j][k] - '0'));
				}
				Min = min(Min , temp);
			}
		}
		cout << Min << endl;
	}
	return 0;
}