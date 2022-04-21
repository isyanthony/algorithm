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

const int N = 260;
struct Con {
	int x, y;
}bcon[N * N];
bool st[N][N];
int ans = 0x3f3f3f3f , num[N] , p[N];

int find(int x){
	if(p[x] != x) p[x] = find(p[x]);
	return p[x];
}

int main(){
	FAST;
	int n , m , k , f;
	cin >> n >> m >> k >> f;
	rep(i , 1 , n) p[i] = i;
	rep(i , 1 , m) cin >> bcon[i].x >> bcon[i].y;
	rep(i , 1 , f) {
		int a , b;
		cin >> a >> b;
		p[find(a)] = find(b);
	}

	rep(i , 1 , m){
		int tx = find(bcon[i].x); 
		if(!st[tx][bcon[i].y]){
			st[tx][bcon[i].y] = true;
			num[tx]++;
		}
	}
	rep(i , 1 , n)
		if(num[i])
			ans = min(ans , num[i]);
	ans = min(ans + k , n);
	cout << ans << endl;
	return 0;
}