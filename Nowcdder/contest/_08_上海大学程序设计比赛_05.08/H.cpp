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
const int N = 31;
int a;
vector<int> one;

int solve(){
	int sz = one.SZ;
	if(sz <= 1) return 1;
	int ans = 1;
	int last = one[0];
	last++;
	rep(i , 1 , sz - 1){
		if(one[i] == last)last++;
		else{
			ans++;
			last = one[i];
			last++;
		}
	}
	return ans;
}

int main(){
	FAST;
	int T;
	cin >> T;
	while(T--){
		int len , sum = 0;
		cin >> len;
		rep(i , 0 , len - 1){
			cin >> a;
			if(a == 1){
				one.pb(i);
			}
			
		}
		
		if(!one.size()) cout << 0 << endl;
		else cout << solve() << endl;
		one.clear();
		
	}
	return 0;
}