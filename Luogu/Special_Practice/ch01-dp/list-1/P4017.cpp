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

const int N = 5010 , M = 5e6 , MOD = 80112002;
int h[N] , v[M] , ne[M] ,  idx;
int f[N];
bool pro[N];
int n , m;

void add(int a , int b){
	v[idx] = b , ne[idx] = h[a] , h[a] = idx++;
}

int dfs(int now){
	int ans = 0LL;
	if(h[now] == -1) return 1;
	if(f[now] != -1)  return f[now];
	for(int i = h[now] ; i != -1 ; i = ne[i]){
		int j = v[i];
		ans +=  dfs(j);
		ans %= MOD;
	}
	f[now] = ans;
	return f[now];
}

int main(){
	FAST;
	cin >> n >> m;
	mm(h , -1 , sizeof h);
	mm(f , -1 , sizeof f);
	while(m--){
		int a , b;
		cin >> a >> b;
		pro[b] = true;
		add(a , b);
	}
	int ans = 0;
	rep(i , 1 , n){
		if(!pro[i]){
			ans += dfs(i);
			ans %= MOD;
		}
	}
	cout << ans << endl;
	return 0;
}