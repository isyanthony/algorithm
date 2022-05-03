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

const int N = 110;
int a[N][N] , f[N][N];
int n , m;
int dx [] = {1 , -1 , 0 , 0} , dy [] = {0 , 0 , 1 , -1};

int dp(int i , int j){
	if(f[i][j]) return f[i][j];
	int sum = 0;
	rep(k , 0 , 3){
		int ti = i + dx[k] , tj = j + dy[k];
		if(ti > 0 && ti <= n && tj > 0 && tj <= m && a[ti][tj] < a[i][j]){
			sum = max(dp(ti , tj) , sum);
		}
	}
	f[i][j] = sum + 1;
	return f[i][j];
}
int main(){
	FAST;
	cin >> n >> m;
	rep(i , 1 , n)
		rep(j , 1 , m) cin >> a[i][j];

	int res = 0;
	rep(i , 1 , n){
		rep(j , 1 , m){
			if(f[i][j] == 0) f[i][j] = dp(i , j);
			res = max(res , dp(i , j));
		}
	}

	cout << res << endl;
	return 0;

}