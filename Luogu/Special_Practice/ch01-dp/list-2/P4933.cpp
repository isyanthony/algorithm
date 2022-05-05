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
const int MOD = 998244353;
const int N = 2e4;
LL f[1010][2 * N];
LL a[1010];
int main(){
	FAST;
	int n;
	cin >> n;
	LL ans = 0LL;
	int p = 20000;
	rep(i , 1 , n) cin >> a[i];
	rep(i , 1 , n){
		ans++;
		per(j , i - 1 , 1){
			f[i][a[i] - a[j] + p] += f[j][a[i] - a[j] + p] + 1LL;
			f[i][a[i] - a[j] + p] %= MOD;
			ans += f[j][a[i] - a[j] + p] + 1LL;
			ans %= MOD;

		}
	}
	cout << ans << endl;
	return 0;
}