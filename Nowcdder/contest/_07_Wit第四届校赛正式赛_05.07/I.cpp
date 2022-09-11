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
	int n;
	cin >> n;
	LL temp , ans = 0LL;
	rep(i , 1 , n){
		temp = 1LL * i * i;
		if(temp <= n){
			ans++;
		}else break;
	}
	cout << ans << " ";
	rep(i , 1 , ans){
		temp = 1LL * i * i;
		cout << temp << " ";
	}
	return 0;
}