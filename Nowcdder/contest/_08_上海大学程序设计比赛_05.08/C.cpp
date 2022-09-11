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
const int N = 27;
char c[N];
int cnt[N];
int main(){
	FAST;
	rep(i , 1 , 26){
		cin >> c[i];
		cnt[c[i] - 'A'] = i;
	}
	
	int n;
	cin >> n;
	string s[n];
	rep(i , 0 , n - 1){
		 cin >> s[i];
	}
	rep(i , 0 , n - 1){
		int sz = s[i].size();
		string temp(sz , 'A');
		for(int j = 0 ; j < sz ; j++){
			int idx = cnt[s[i][j] - 'A'];
			if(idx % 2) idx++;
			else idx--;
			cout << c[idx];
		}
		cout << " ";
	}
	
	return 0;
}