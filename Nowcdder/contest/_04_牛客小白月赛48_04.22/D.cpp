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
const int eps = 1e-6;
const int INF = 0x3f3f3f3f;
const int MINF = 0x3f;

const int N = 10010;
const int MOD = 1e9 + 10;
int a[N];

int main(){
	int n;
	FAST;
	cin >> n;
	rep(i , 1 , n) cin >> a[i];

	sort(a + 1 , a + n + 1);
	LL ans = a[1];
	int len = 1;
	while(len <= n){
		if(i & 1) ans = (ans * a[i]) % MOD;
		else ans = (ans + a[i]) % MOD;		
	}

	cout << ans % MOD << endl;
	return 0;

}