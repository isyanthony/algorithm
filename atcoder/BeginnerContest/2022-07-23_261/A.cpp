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

int main(){
	FAST;
	int a , b , c , d;
	cin >> a >> b >> c >> d;
	if(a >= c) swap(a , c) , swap(b , d);
	if(c >= b) cout << 0 << endl;
	else if(c <= b && d <= b) cout << abs(d - c) << endl;
	else cout << abs(c - b) << endl;
	return 0;
}