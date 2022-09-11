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
int a[20];
int main(){
	FAST;
	int n2 = -1;
	bool t2 = false, t3 = false;
	rep(i , 0 , 4){
		cin >> a[i];
	}
	sort(a , a + 5);
	
	if((a[0] == a[1] && a[2] == a[4]) || (a[3] == a[4] && a[0] == a[2])) cout << "Yes" << endl;
	else cout << "No" << endl;
	
	return 0;
}