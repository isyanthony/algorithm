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

const int N = 100010;
int a[N] , fa[N] , fb[N];
int main(){
	FAST;
	int lenA = 1 , lenB = 1 , n = 0;
	while(cin >> a[++n]);
	n--;
	fa[1] = fb[1] = a[1];
	rep(i , 2 , n){
		if(fa[lenA] >= a[i]) fa[++lenA] = a[i];
		else{
			int p1 = upper_bound(fa + 1 , fa + 1 + lenA , a[i] , greater<int>()) - fa;
			fa[p1] = a[i];
		}

		if(fb[lenB] < a[i]) fb[++lenB] = a[i];
		else{
			int p2 = lower_bound(fb + 1 , fb + 1 + lenB , a[i]) - fb;
			fb[p2] = a[i];
		}
	}
	cout << lenA << endl << lenB;

	return 0;
}