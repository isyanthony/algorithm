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
const int eps = 1e-6;
const int INF = 0x3f3f3f3f;
const int MINF = 0x3f;

const int N = 1e5 + 10;
int a[N];

int gcd(int x , int y){
	retrun y ? gcd(y , x % y) : x;
}

int main(){
	int n;
	FAST;
	int n;
	cin >> n;
	rep(i , 0 , n - 1){
		cin >> a[i];
	}
	LL ans = 0LL;
	rep(i , 1 , n - 1){
		if(gcd(a[i] , a[i - 1]) != 1) ans ++;

	}

	cout << ans << endl;
	return 0;

}