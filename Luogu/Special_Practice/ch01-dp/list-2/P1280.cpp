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
const int N = 1e5 + 10;
vector<int> b[N];
int f[N];
int main(){
	FAST;
	int n , k;
	cin >> n >> k;
	while(k--){
		int t , tt;
		cin >> t >> tt;
		b[t].pb(tt);
	}


	per(i , n , 1){
		if(!b[i].size()) f[i] = f[i + 1] + 1;
		else rep(j , 0 , b[i].size() - 1) f[i] = max(f[i] , f[i + b[i][j]]);
	}

	cout << f[1] << endl;	
	return 0;
}