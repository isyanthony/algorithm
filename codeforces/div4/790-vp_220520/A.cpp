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

int n;
int main(){
	FAST;
	cin >> n;
	while(n--){
		string t;
		cin >> t;
		string a = t.substr(0 , 3) , b = t.substr(3 , 3);
		int as = 0 , bs = 0;
		for(int i = 0 , j = 3 ; i < 3 ; i++){
			as += (a[i] - '0');
			bs += (b[i] - '0');
		}
		cout << (as == bs ? "YES" : "NO") << endl;
	}
	return 0;
}