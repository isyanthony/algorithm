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

const int N = 24;
int a[N] , f[N], g[N][N] , path[N];
int n;
int main(){
	FAST;
	cin >> n;
	rep(i , 1 , n){
		cin >> a[i];
	}

	int ans = 0;
	rep(i , 1 , n - 1)
		rep(j , i + 1 , n) cin >> g[i][j];

	f[n] = a[n];
	int to = -1 , from = -1;
	per(i , n - 1 , 1){
		path[i] = -1;
		f[i] = a[i];
		rep(j , i , n){
			if(g[i][j]){
				if(a[i] + f[j] >= f[i]){
					f[i] = a[i] + f[j];
					path[i] = j;
				}
			}
			if(ans < f[i]){
				ans = f[i];
				from = i;
			}
		}
	} 

	cout << from << " ";
	rep(i , 1 , n - 1) 
		if(path[i] != -1)
			cout << path[i] << " ";
	cout << endl;
	cout << ans << endl;
	return 0;
}