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

const int N = 105;
unordered_map<string , int> m;
int st[N];
int main(){
	FAST;
	int T;
	cin >> T;
	rep(i , 0 , T - 1){
		string s , t;
		cin >> s >> t;
		if((bool) (m.find(s) != m.end())){
			 st[m.find(s)->se]--;
			 m.erase(s);
		}else {
			m[s] = i;
			st[i]++;
		}

		if((bool) (m.find(t) != m.end())){
			 st[m.find(t)->se]--;
			 m.erase(t);
		}else {
			m[t] = i;
			st[i]++;
		}

	}
	rep(i , 0 , T - 1){
		if(st[i] == 0){
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;

}