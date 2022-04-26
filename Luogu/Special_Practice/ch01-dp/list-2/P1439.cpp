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
const double EPS = 1e-6;

const int N = 10010;
int a[N] , b[N] , f[N][N];
int main(){
	FAST;
	int n;
	cin >> n;
	rep(i , 1 , n) cin >> a[i];
	rep(i , 1 , n) cin >> b[i];

	rep(i , 1 , n){
		rep(j , 1 , n){
			if(a[i] == b[j]) f[i][j] = f[i - 1][j - 1] + 1;
			else f[i][j] = max(f[i - 1][j] , f[i][j - 1]);
		}
	}

	cout << f[n][n] << endl;
	return 0;
}