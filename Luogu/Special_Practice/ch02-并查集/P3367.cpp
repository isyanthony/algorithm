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

const int N = 2e5 + 10;
int p[N];
int find(int x){
	if(x != p[x]) p[x] = find(p[x]);
	return p[x];
}
int main(){
	int n , m;
	cin >> n >> m;
	rep(i , 1 , n) p[i] = i;
	while(m--){
		int z , a , b;
		cin >> z >> a >> b;
		if(z == 1) p[find(a)] = find(b);
		else {
			cout << (find(a) == find(b) ? "Y" : "N") << endl;
		}
	}
	return 0;
}