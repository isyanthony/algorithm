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

const int N = 4e5 + 10;
int a[N] , n , k;
LL ans = -1;
int main(){
	FAST;
	bool success = false;
	cin >> n >> k;
	LL target = 0;
	rep(i , 1 , n){
		cin >> a[i];
		if(i <= k) target += a[i]; 
	}
	target++;

	


}