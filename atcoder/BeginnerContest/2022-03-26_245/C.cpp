#include<iostream>
#include<cstring>
using namespace std;
typedef long long ll;
const ll N = 2e5 + 10;
ll a[N] , b[N] , k , n;
bool fail[2][N];
int main(){
	cin >> n >> k;
	for(ll i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	for(ll i = 0 ; i < n ; i++){
		cin >> b[i];
	}	
	memset(fail , true , sizeof fail);
	fail[0][0] = fail[1][0] = false;
	for(ll i = 1 ; i < n ; i++){
		if(abs(a[i] - a[i - 1]) <= k) fail[1][i] = !fail[1][i-1] ? false : fail[1][i];
		if(abs(a[i] - b[i - 1]) <= k) fail[1][i] = !fail[0][i-1] ? false : fail[1][i];
		if(abs(b[i] - b[i - 1]) <= k) fail[0][i] = !fail[0][i-1] ? false : fail[0][i];
		if(abs(b[i] - a[i - 1]) <= k) fail[0][i] = !fail[1][i-1] ? false : fail[0][i];
	}
	if(!fail[0][n-1] || !fail[1][n-1]) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}