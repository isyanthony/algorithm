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

const int N = 2010;
int f[N][N];
string a, b;
int main(){
	FAST;
	cin >> a >> b;
	int aS = a.size() , bS = b.size();
	rep(i , 1 , aS) f[i][0] = i;
	rep(i , 1 , bS) f[0][i] = i;
	rep(i , 1 , aS){
		rep(j , 1  , bS){
			if(a[i - 1] == b[j - 1]) f[i][j] = f[i - 1][j - 1];
			else  f[i][j] = min(min(f[i][j - 1] + 1 , f[i - 1][j] + 1) , f[i - 1][j - 1] + 1);
		}
	}

	cout << f[aS][bS] << endl;
	return 0;
}