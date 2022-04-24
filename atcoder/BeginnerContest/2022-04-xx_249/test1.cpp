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

const int N = 100005;
const int MOD = 1e9 + 7;
int a[N];

int main(){
	int n;
	FAST;
	cin >> n;
	rep(i , 1 , n) cin >> a[i];

	sort(a + 1 , a + n + 1);
    int l =  n - (n - 1) / 2 , r = n - (n - 1) / 2 + 1;
	LL ans = 0LL;
    int len = 0;
	while(len < n){
		if(len > 1 && len % 2 == 0) ans = 1LL * ans * a[r] % MOD , r++;
		else ans = (ans + a[l]) % MOD , l--;
        len++;
	}

	cout << ans % MOD << endl;
	return 0;

}