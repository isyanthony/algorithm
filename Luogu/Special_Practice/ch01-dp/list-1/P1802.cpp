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

const int N = 1010;
LL a[N] , b[N] , f[N];
LL sum;
int n , x;
int main(){
	FAST;
	cin >> n >> x;
	rep(i , 0 , n - 1){
		int w , ff , v;
		cin >> ff >> w >> v;
		sum += ff;
		a[i] = w - ff , b[i] = v;
	}
	rep(i , 0 , n - 1){
		// 如果从小到大进行遍历 , 那么 f[j - b[i]] 的值已经在第二轮更新过
		// 而所需要的是上以轮循环所使用的值
		// 因此可以从大到小进行枚举 , 保证所有值都可以取到上一轮的值
		per(j , x , 0){
			if(j >= b[i]) f[j] = max(f[j] , f[j - b[i]] + a[i]);

		}
	}

	sum += f[x] ;

	cout << sum * 5 << endl;
	return 0;
}