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

LL a , b , n , ans;
int main(){
	FAST;
	cin >> a >> b >> n;
	ans = (n / (5 * a + 2 * b)) * 7;
	n = n % (5 * a + 2 * b);
	rep(i , 1 , 7){
		ans++;
		if(i == 6 || i == 7) n -= b;
		else n -= a;
		if(n <= 0) break;
	}
	cout << ans << endl;	
	return 0;
}