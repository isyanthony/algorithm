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

const int N = 110;
int n , k , x , y;
int Max = 0;

void sovle(){
	bool over = ceil((double) Max / x) <= k;
	int time = over ? ceil((double) Max / x) : k;
	if(!over){
		Max -= (k * x - k * y);
		time = ceil((double) Max / y);
	}
	cout << time << endl;
	return;
}

int main(){
	FAST;
	int T , t;
	cin >> T;
	while(T--){
		cin >> n >> k >> x >> y;
		rep(i , 0 , n - 1){
			cin >> t;
			Max = max(Max , t);
		}
		sovle();
		Max = 0;
	} 
}