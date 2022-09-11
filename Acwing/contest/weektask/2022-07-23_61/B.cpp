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
const int N = 19;
int n , a[N];

bool dfs(int res , int i){
	if(i == n){ 
		if(res == 0 || res == 360) return true;
		return false;
	}
	if(!dfs(res + a[i] , i + 1) && !dfs(res - a[i] , i + 1)) return false;

	return true;
	 
}

int main(){
	FAST;
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	bool res  = dfs(0,0);
	cout << (res ? "YES" : "NO") << endl;
	return 0;
}

