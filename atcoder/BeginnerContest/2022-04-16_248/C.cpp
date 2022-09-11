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
const int MOD = 998244353;
const int N = 55 , M = 2550;
LL a[N] , f[N][M];
int n , m , k;
int main(){
	FAST;
	cin >> n >> m >> k;

	f[0][0] = 1;
	// 枚举选取的数量个数
	rep(i , 0 , n - 1){
		// 枚举数据和
		rep(j , 0 , k - 1){
			// 枚举所有数字
			rep(t , 1 , m){
				if(j + t <= k) {
					f[i + 1][j + t] += f[i][j];
					f[i + 1][j + t] %= MOD;
				}
			}
		}
	}

	LL res = 0LL;
	rep(i , 1 , k){
		 res += f[n][i];
		 res %= MOD;
	}

	cout << res << endl;
	return 0;
}