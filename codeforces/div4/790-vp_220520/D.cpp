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

int g[210][210];
int dx[] = {1 , -1 , 1 , -1} , dy[] = {1 , -1  , -1 , 1};
int main(){
	FAST;
	int T;
	cin >> T;
	while(T--){
		int n , m;
		cin >> n >> m;
		rep(i , 1 , n) rep(j , 1 , m) cin >> g[i][j];
		LL Max = -1LL;
		rep(i , 1 , n){
			rep(j , 1 , m){
				LL sum = g[i][j];
				rep(t , 0 , 3){
					int a = i + dx[t] , b = j + dy[t];
					while(a >= 1 && a <= n && b >= 1 && b <= m){
						sum += g[a][b];
						a += dx[t] , b += dy[t];
					}
				}
				Max = max(Max , sum);
			}
		}
		cout << Max << endl;
	}
	
	return 0;
}