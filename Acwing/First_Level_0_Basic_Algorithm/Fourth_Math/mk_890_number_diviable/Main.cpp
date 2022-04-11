#include<iostream>
using namespace std;
typedef long long ll;
const int N = 1e6 + 10;
int n , m;
int p[N];

int main(){
	cin >> n >> m;
	for(int i = 0 ; i < m ; i++) cin >> p[i];

	int ans = 0;
	for(int i = 1 ; i < 1 << m ; i++){
		ll t = 1 , s = 0;		
		for(int j = 0 ; j < m ; j++){
			if(i >> j & 1){
				if((ll)t * p[j] > n){
					t = -1;
					break;
				}
				s++;
				t *= p[j];
			}
		}

		if(t == -1) continue;
		if(s & 1) ans += n / t;
		else ans -= n / t;
	}

	cout << ans << endl;
	return 0;
}
