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
const int N = 1e7 + 10;
LL a[N];
int main(){
	FAST;
	int T;
	cin >> T;
	while(T--){
		int n;
		cin >> n;
		LL total = 0LL , Min = 0x3f3f3f3fLL;
		rep(i , 0 , n - 1){
			cin >> a[i];
			total += a[i];
			Min = min(a[i] , Min);
		}
		
		cout << (total - n * Min) << endl;
	}
	return 0;
}