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

vector<PII> p;
int main(){
	FAST;
	int n , c;
	unordered_set<int> s;
	cin >> n;
	rep(i , 1 , n){
		cin >> c;
		if(!s.count(c)){
			p.pb({c , i});
			s.insert(c);
		}
	}
	int sz = p.size();
	sort(p.begin() , p.end());
	if(sz < 3) cout << -1 << " " << -1 << " " << -1 << endl;
	else{
		rep(i , 0 , 2){
			cout << p[i].se << " ";
		}
	}
	return 0;
}