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
const int N = 2e5 + 10;
string s;
unordered_map<string , int> m;
int main(){
	FAST;
	int n;
	cin >> n;
	while(n--){
		cin >> s;
		if(!m.count(s)) m[s] = -1;
		m[s]++;
		int x = m[s];
		if(x) cout << s << "(" << x << ")" << endl;
		else cout << s << endl; 
	}
	return 0;
}