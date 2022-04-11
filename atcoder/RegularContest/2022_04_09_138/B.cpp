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

int n;
string ans = "";
queue<pair<string , int>> q;
int main(){
	FAST;
	cin >> n;
	char c;
	rep(i , 0 , n - 1){
		cin >> c;
		ans += c;
	} 
	bool flag = false;
	q.push({"" , 0});
	while(q.size()){
		auto t = q.front(); q.pop();
		if(t.fi == ans){
			flag = true;
			break;
		}
		if(t.se <= n){
			string opA = t.fi , opB = t.fi;
			rep(i , 0 , opA.size()) 
				if(opA[i] == '1') opA[i] = '0';
				else opA[i] = '1';
			opA = "0" + opA;
			opB = opB + "0";
			q.push({opA , t.se + 1});
			q.push({opB , t.se + 1});
		}

	}
	
	if(flag) puts("Yes");
	else puts("No");


}