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
const int N = 1e5;
LL a[N];
LL cnt[N];
LL n , m;



LL C(LL n){
	if(n <= 2) return 0;
	return n * (n - 1) * (n - 2) / 6;
}


int main(){
	FAST;
	cin >> n >> m;
	rep(i , 1 , n){
		cin >> a[i];
		cnt[a[i]]++;
	}
	LL ans = 0;
	rep(i , 1 , 1e6){
		if(cnt[i] >= 3) ans += C(cnt[i]);
	}
	while(m--){
		int x , y;
		cin >> x >> y;
		ans -= C(cnt[a[x]]);
		ans += C(cnt[a[x]]);
		cnt[a[x]]--;
		a[x] = y;
		ans -= C(cnt[y]);
		cnt[y]++;
		ans += C(cnt[a[x]]);
		cout << ans << endl;
	}
	
	return 0;
}