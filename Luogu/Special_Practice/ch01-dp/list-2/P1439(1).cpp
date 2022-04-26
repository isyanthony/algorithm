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

const int N = 100010;
int a[N] , b[N] , f[N] , dp[N];
int main(){
	FAST;
	int n;
	cin >> n;
	rep(i , 1 , n) cin >> a[i];
	rep(i , 1 , n) cin >> b[i];
	rep(i , 1 , n) f[a[i]] = i;
	rep(i , 1 , n) b[i] =f[b[i]];
	int len = 1;
	dp[1] = b[1];
	rep(i , 2 , n){
		if(dp[len] < b[i]) dp[++len] = b[i];
		else{
			int l = 1 , r = len + l;
			while(l < r){
				int mid = (l + r) / 2;
				if(dp[mid] > b[i]) r = mid;
				else l = mid + 1;
			}
			dp[l] = b[i];
		}
	}

	cout << len << endl;
	return 0;
}