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

const int N = 5001;
int p[N] , g[N][N];

int n , k;

int find(int x){
	if(p[x] != x) p[x] = find(p[x]);
	return p[x];
}

int main(){
	FAST;
	cin >> n >> k;
	rep(i , 1 , n) p[i] = i;
	int ans = 0;
	mm(g , -2 , sizeof g);
	while(k--){
		int op , x , y;
		cin >> op >> x >> y;
		if(x < 0 || x > n || y < 0 || y > n || (op != 1 && x == y)){
			ans++;
			continue;
		}
		int tx = find(p[x]) , ty = find(p[y]);
		if(op == 1){
			if(g[tx][ty] == -2){
				p[tx] = ty;
				g[tx][ty] = 1;
			}else if(tx != ty || g[tx][ty] != 1 || g[ty][tx] != 1){
				 ans++;
				 cout << "#op : " << op << " #x : " << x << " #y : " << y << endl;
			}
		}else if(op == 2){
			if(tx == ty || g[tx][ty] == 0 || g[tx][ty] == 1 || g[ty][tx] == -1){ 
				cout << "#op : " << op << " #x : " << x << " #y : " << y << endl;
				ans++;
			}
			else{
				g[tx][ty] = -1;
			}
		}else{
			if(tx == ty || g[tx][ty] != -2){
				cout << "#op : " << op << " #x : " << x << " #y : " << y << endl;
				 ans++;
			}
			g[tx][ty] = 0;
		}
	}
	cout << ans << endl;
	return 0;
}