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


const int N = 1e7 + 10 , M = 1e4 + 10;
LL t[M] , v[M] , f[N];
int n , m;
int main(){
	FAST;
	cin >> n >> m;
	rep(i , 1 , m) cin >> t[i] >> v[i];
	rep(i , 1 , m)
		rep(j , t[i] , n)
			f[j] = max(f[j] , f[j - t[i]] + v[i]);

	cout << f[n] << endl;
	return 0;
}