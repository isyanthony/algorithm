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

const int N = 1010;
// f[i][j] 表示走到(i , j)时所能得到的最大点数
// 只需要取得左上方 以及 正上方中的最大值,再加上当前点的权值即可
// f[i][j] = max(f[i - 1][j - 1] , f[i - 1][j]) + a[i][j]
int f[N][N];
int a[N][N];
int main(){
	int n;
	cin >> n;
	rep(i , 1 , n){
		rep(j , 1 , i){
			cin >> a[i][j];
		}
	}

	//自上而下
	rep(i , 1 , n){
		rep(j , 1 , i){
			f[i][j] = max(f[i - 1][j - 1] , f[i - 1][j]) + a[i][j];
		}
	}

	int ans = 0;
	rep(i , 1 , n) ans = max(ans ,  f[n][i]);

	cout << ans << endl;

	return 0;
}