#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define pb push_back
#define mm memset
#define mp make_pair
#define PII pair<int,int>
#define SZ size()
#define LL long long
#define FAST ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define rep(i,a,b) for(int i=a;i<=b;++i)
#define per(i,a,b) for(int i=a;i>=b;--i)
const int INF = 0x3f3f3f3f;
const int MINF = 0x3f;
const double EPS = 1e-6;

const int N = 5010;
PII p[N];
int n;
int f[N] , ans;
bool cmp(PII a , PII b){
	if(a.fi == b.fi) return a.se < b.se;
	return a.fi < b.fi;
}

int main(){
	FAST;
	cin >> n;
	rep(i , 1 , n){
		int a , b;
		cin >> a >> b;
		p[i] = mp(a, b);
	}
	sort(p + 1 , p + n + 1 , cmp);

	rep(i , 1 , n){
		rep(j , 1 , i -1){
			if(p[j].se > p[i].se && p[j].fi < p[i].	fi)
				f[i] = max(f[j] + 1 , f[i]);
		}
		ans = max(f[i] , ans);
	}
	cout << ans + 1 << endl;
	return 0;
}