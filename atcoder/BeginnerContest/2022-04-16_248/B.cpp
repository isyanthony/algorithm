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

LL a , b , k;
int main(){
	FAST;
	cin >> a >> b >> k;
	if(b <= a){
		cout << 0 << endl;
		return 0;
	}
	LL ans = 0LL;
	while(a < b){
		a *= k;
		ans++;
	}
	cout << ans << endl;
	return 0;
}