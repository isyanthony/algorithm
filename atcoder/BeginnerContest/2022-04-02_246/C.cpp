#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
const int N = 2e5 + 10;
ll n , k , x , res = 0 , total = 0;
ll p[N];
int main(){

	scanf("%lld%lld%lld" , &n , &k , &x);
	ll times = 0;
	for(ll i = 0 ; i < n ; i++){
		scanf("%lld" , &p[i]);
		total += p[i];
		times += p[i] / x;
		p[i] %= x;
	}
	times = min(times , k);
	k -= times;
	res = max(total - times * x , 0LL);
	sort(p , p + n);
	for(ll i = n - 1 ; i >= 0 ; i--){
		if(k == 0) break;
		res -= p[i];
		k--;
	}
	cout << res << endl;
	return 0;

}