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
unordered_map<int , int> cnt;
LL n , m;

void decrease(){
	rep(i , 1 , n){
		cnt[i]--;
		if(cnt[i] == 0) cnt.erase(i);
	}
}

int main(){
	FAST;
	cin >> n >> m;
	rep(i , 1 , m){
		int tmp;
		cin >> tmp;
		cnt[tmp]++;
		int sz = cnt.size();
		if(sz == n){
			cout << 1;
			decrease();
		}else cout << 0;
	}
	return 0;
}