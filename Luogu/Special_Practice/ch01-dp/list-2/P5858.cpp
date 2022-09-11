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
const int N = 5e3 + 10;
LL a[N] , f[N][N];
int n , w , s;
int main(){
	FAST;
	cin >> n >> w >> s;
	rep(i , 1 , n) cin >> a[i];
	mm(f , -0xcf , sizeof f);
	f[0][0] = 0;
	rep(i , 1 , n){
		per(j , w , 0){
			per(k , min(j + s - 1 , w) , j - 1)
				f[i][j] = max(f[i][j] , f[i - 1][k] + a[i] * j);
		}
	}

	LL ans = -0xcfcfcfcf;
	rep(i , 1 , w){
		ans = max(ans , f[n][i]);
	}
	cout << ans << endl;
	return 0;
}