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

int T , n;
int res;
string s[N];

void dfs(int u  , int len , string last){
	if(u == n){
		res = max(len , res);
		return;
	}

	if(u == 0){
		dfs(u + 1 , len + s[u].length() , s[u]);
	}else if(last != "-1" && s[u][0] == last[last.length() - 1]){
		dfs(u + 1 , len + s[u].length() , s[u]);
	}
	dfs(u + 1 , len, last);


}

int main(){
	FAST;
	cin >> T;
	while(T--){
		cin >> n;
		rep(i , 0 , n - 1) cin >> s[i];
		dfs(0 , 0 , "-1");
		cout << res << endl;
	}

}