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
const int N = 5010;
LL x[N] , c[N];
LL f[N][N];
int n , m;

int main(){
	FAST;
	cin >> n >> m;
	int tmp , num;
	rep(i ,  1 , n) cin >> x[i];
	rep(i ,  0 , m - 1){
		cin >> tmp >> num;
		c[tmp] = num;
	} 	
	
	rep(i , 1 , n){
		
		rep(j , 0 , i){
			f[i][j] = f[i - 1][j - 1] + x[i] + c[j];
		}
		rep(j , 0 , i - 1){
			f[i][0] = max(f[i][0] , f[i - 1][j]);
		}
	}
	
	LL ans = f[n][0];
	rep(i , 1 , n) ans = max(ans , f[n][i]);
	cout << ans << endl;
	return 0;
}