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
const int N = 2e5 + 10;
int n , c;
vector<PII> op;
int main(){
	FAST;
	cin >> n >> c;
	rep(i , 1 , n){
		int a , b;
		cin >> a >> b;
		op.pb({a , b});
	}
	
	int tmp = c;
	rep(i , 0 , n - 1){
		rep(j , 0 , i){
			int p = op[j].fi , x = op[j].se;
			if(p == 1){
				c &= x;
			}else if(p == 2){
				c |= x;
			}else if(p == 3){
				c ^= x;
			}
		}
		cout << c << endl;	
	}
	
	return 0;
}