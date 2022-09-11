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
int n , m;
int main(){
	FAST;
	cin >> m >> n;
	int ans = -1;
	if(n == 0 && m == 0) ans = 0;
    else if(n == 0 && m != 0) ans = -1;
    else {
        ans = m / n;
        if(m % n) ans++;
    }
    
	cout << ans << endl;
	return 0;
}