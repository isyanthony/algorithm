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
const int MOD = 1e6 + 7;
const int N = 110;
int f[N][N];
int a[N];
LL ans;
int n , m;
int main(){
	FAST;
	cin >> n >> m;
	rep(i , 1 , n) cin >> a[i];
	f[0][0] = 1;
    // 枚举前i类花
	rep(i , 1 , n){
        // 枚举摆放的盆数
		rep(j , 0 , m){
            // 枚举每种花摆放的最大数量
			rep(k , 0 , a[i]){
                // 如果能放下
				if(j - k >= 0)
					(f[i][j] += (f[i - 1][j - k])) %= MOD;
			}
		}
	}

	cout << f[n][m] << endl;
	return 0;
}