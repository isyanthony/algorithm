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

int main(){
	FAST;
	LL n ,  l , r , sum = 0;
	cin >> n >> l >> r;
	LL a[n + 10] , p[n + 10];
	mm(a , 0 , sizeof a);
	mm(p , 0 , sizeof p);
	rep(i , 1 , n)
		cin >> a[i];
		sum += a[i];
	}
	LL ans = sum;
	rep(i , 1 , n){
		p[i] = min(p[i - 1] + a[i] , (i) * l);
	}
	per(i , n + 1 , 1){
		ans = min(ans , p[i - 1] + r * (n - i + 1));
	}
	cout << ans << endl;
	return 0;
}