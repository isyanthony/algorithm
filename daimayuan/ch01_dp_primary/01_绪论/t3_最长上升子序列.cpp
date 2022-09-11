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

const int N = 1010;
int a[N] , f[N];
int n;
int main(){
	FAST;
	cin >> n;
	rep(i , 1 , n) {
		cin >> a[i];
		f[i] = 1;
	}
	int ans = 1;
	rep(i , 2 , n){
		rep(j , 1 , i - 1){
			if(a[i] > a[j]) f[i] = max(f[i] , f[j] + 1);
		}
		ans = max(ans , f[i]);
	}
	cout << ans << endl;
	return 0;
}