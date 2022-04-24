#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define pb push_back
#define mm memset
#define LL long long
#define FAST ios::sync_with_stdio(false) , cin.tie(0) , cout.tie(0)
#define rep(i , a , b) for(int i=a;i<=b;i++)
#define per(i , a , b) for(int i=a;i>=b;i--)
const int INF = 0x3f3f3f3f;
const int MINF = 0x3f;

int a[10];
int main(){
	string s;
	cin >> s;
	rep(i , 0 , s.size() - 1) a[s[i] - '0']--;
	rep(i , 0 , 9)	
		if(a[i] == 0){
			cout << i << endl;
			break;
		}
	return 0;
}