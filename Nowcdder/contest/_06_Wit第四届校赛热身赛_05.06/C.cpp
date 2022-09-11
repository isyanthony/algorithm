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
const int N = 22;
unordered_set<string> cnt;
queue<pair<string , int>> q;
int a[N]; 
int n , M , k;
bool st[N];


void dfs(int u , string str){
	if(u == M){
		if(cnt.count(str) == 0 && (str[0] - '0') == n ){
			// cout << str << " " << cnt.count(str) <<endl;
			cnt.insert(str);
		}
		return;
	}
	rep(i , 0 , M - 1){
		if(!st[i] && (!str.size() || abs(a[i] - (str[str.size() - 1] - '0')) < k)){
			st[i] = true;
			dfs(u + 1 , str + to_string(a[i]));
			st[i] = false;
		}
	}	
}


int main(){
	FAST;
	cin >> M >> n >> k;
	int times = 0 , idx;
	
	rep(i , 0 , M - 1){
		cin >> a[i];
		if(a[i] == n){
			 times++;
			 idx = i;
		}
	}
	if(times == 0){
		cout << 0 << endl;
		return 0;
	}
	dfs(0 , "");
	per(i , times - 1 , 1) times *= i;
	
	cout << cnt.size() * times << endl;
	 
	
	return 0;
}