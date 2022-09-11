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

const int N = 2e5 + 10;
int main(){
	FAST;
	int n , a;
	cin >> n;
	vector<vector<int>> f(n + 1);
	rep(i , 0 , n - 1){
		cin >> a;
		f[a].pb(i); 
	}

	int T;
	cin >> T;
	while(T--){
		int l , r ,x;
		cin >> l >> r >> x; 
		cout << lower_bound(f[x].begin(), f[x].end(), r) - lower_bound(f[x].begin(), f[x].end(), l - 1) << endl;
	}

	return 0;
}