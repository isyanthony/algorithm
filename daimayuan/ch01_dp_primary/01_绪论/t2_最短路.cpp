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
int f[N] , g[N][N];
int n , T;

int main(){
	FAST;
	cin >> n >> T;
	int a , b , w;
	memset(g , 0x3f , sizeof g);
	rep(i , 0 , T - 1){
		cin >> a >> b >> w;
		g[a][b] = w;
	}	

	memset(f , 0x3f , sizeof f);
	f[1] = 0;
	rep(i , 2 , n){
		per(k , i - 1 , 1){
			f[i] = min(f[i]  , f[i - k] + g[i - k][i]);
		}
	}

	cout << f[n] << endl;
	return 0;
}