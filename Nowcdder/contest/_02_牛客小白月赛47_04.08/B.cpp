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
const int MOD = 1e9 + 7;

int main(){
	FAST;
	int n;
	cin >> n;
	LL ans = 1ll;

	while(n--){
		int t;
		cin >> t;
		ans *= t;
		ans %= MOD;
	}
	cout << ans << endl;
}