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

const int N = 2e5 + 10;
int a[N];
int n , c;
int main(){
	FAST;
	cin >> n;
	rep(i , 0 , n - 1) cin >> a[i];
	cin >> c;

	int hh = 0 , tt = n - 1 , index = -1 , res = 0 , target = -1;

	while(true){
		index = -1;
		per(i , tt , hh){
			if(a[i] > c){
				index = target = i;
				tt = i - 1;
				break;
			}
		}
		res++ , hh++;

		if(index == -1){
			if(target != -1) res += (target - hh + 1);
			else res += (n - hh + 1);
			break; 
		}


	}

	cout << res << endl;

}