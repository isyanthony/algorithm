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

const int N = 100010;
int w[N] , s[N];
int n , m;

int main(){
	FAST;
	cin >> n >> m;
	rep(i , 1 , n) cin >> w[i];
	rep(i , 1 , n) s[i] = s[i - 1] + w[i];

	while(m--){
		int k;
		cin >> k;
		int ans = -1 , Min = 0x3f3f3f3f;
		rep(i , 1 , n){
			if(k - s[i] >= 0)
				if(k - s[i] <= Min){
					Min = k + s[i];
					ans = i;
				}
		}

		cout << ans << endl;
	}
	return 0;
}