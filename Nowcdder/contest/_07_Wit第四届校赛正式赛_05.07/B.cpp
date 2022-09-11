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
const int N = 1e6 + 10;


long double f[N];
int main(){
	FAST;
	f[0] = -0.57721566490153286060651209008240243104215933593992;
	f[1] = f[0] + f[1];
	long double one = 1.0;
	rep(i , 2 , N){
		f[i] = f[i - 1] + (one / (i - 1));
	}
	int T;
	cin >> T;
	while(T--){
		int k;
		cin >> k;
		printf("%.6Lf\n" , f[k]);
	}
	
	return 0;
}