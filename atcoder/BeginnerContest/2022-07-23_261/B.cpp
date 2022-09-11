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
const int N = 1010;
int f[N][N];
int main(){
	FAST;
	int n;
	cin >> n;
	char c;
	rep(i , 0 , n - 1){
		rep(j , 0 , n - 1){
			cin >> c;
			if(c == '-') f[i][j] = 0;
			else if(c == 'W') f[i][j] = 1;
			else if(c == 'L') f[i][j] = -1;
			else f[i][j] = 2;
		}
	}
	bool tag = true;
	rep(i , 0 , n - 1){
		rep(j , 0 , n - 1){
			// cout << f[i][j] << " ";
			if(f[i][j] == 0) continue;
			else if((f[i][j] == 1 || f[i][j] == -1) && f[i][j] * f[j][i] != -1) tag = false;
			else if(f[i][j] == 2 && f[j][i] * f[i][j] != 4) tag = false;
			if(!tag) break;
		}
		// cout << endl;
		if(!tag) break;
	}
	if(tag) cout << "correct" << endl;
	else cout << "incorrect" << endl;
	return 0;
}