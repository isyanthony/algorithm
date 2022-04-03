#include<iostream>
using namespace std;
typedef long long ll;
ll N = 8e18;
ll n;
ll res = 0;

ll f(ll a , ll b){
	return (a*a*a + a*a*b + a*b*b + b*b*b);
}

int main(){
	cin >> n;
	ll a = 1000000 , b = 0;
	while(a >= b){
		res = f(a , b);
		if(res < n){
			b++;
		}else{
			a--;
			N = min(res , N);
		}
	}
	cout << N << endl;
	return 0;
}