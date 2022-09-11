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
LL ans = 0, Max = -1 , Total , cnt;
double Mean = -1;
int main(){
	FAST;
	int n;
	cin >> n;
	rep(i , 1 , n){
		int tmp;
		cin >> tmp;
		if(tmp == 1){
			LL a;
			cin >> a;
			Total += a;
			Max = max(a , Max);
			Mean = ((1.0)* Total) / (++cnt);
		}else{
			printf("%.6lf\n" , (double)Max - Mean);
		}
	}
	return 0;
}