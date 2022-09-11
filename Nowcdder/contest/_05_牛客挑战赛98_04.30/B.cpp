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
const int N = 1e6 + 10;

int a[N];
int n , m;
int main(){
	FAST;
	int T;
	cin >> T;
	while(T--){
		cin >> n >> m;
		rep(i , 0 , n - 1) cin >> a[i];
		sort(a , a + n);
		int r = lower_bound(a , a + n , m) - a;
		int ans = n - r;
		per(i , r , 0){
			if(a[i] + a[i - 1] >= m) ans ++;
			else break;
		}
		cout << ans << endl;
	}
	return 0;
}