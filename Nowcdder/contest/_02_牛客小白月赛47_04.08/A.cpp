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

const double M = 3.141592653589;

int n;
double r , h;
int main(){
	FAST;
	double res;
	cin >> n;
	while(n--){
		cin >> r >> h;
		double v = M * r * r * (1.0) * h;
		double cv = M * r * r * r * 4 / (3.0);
		int time = h/(r * 2);
		res = v - time * cv;
		printf("%.3lf\n" , res);

	}
}