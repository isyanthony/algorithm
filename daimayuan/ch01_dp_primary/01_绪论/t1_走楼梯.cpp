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

const int N = 110;
LL f[N];
int main(){
	FAST;
	int n;
	cin >> n;
	f[1] = 1 , f[2] = 2;
	rep(i , 3 , n) f[i] = f[i - 1] + f[i - 2];
	cout << f[n] << endl;
	return 0;
}