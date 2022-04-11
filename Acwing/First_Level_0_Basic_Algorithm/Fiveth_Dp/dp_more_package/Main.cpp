#include<iostream>
using namespace std;
const int N = 1010;
int f[N];
int n , v;
int a[N] , w[N];

int main(){
	cin >> n >> v;
	int cnt = 0;
	for(int i = 1 ; i <= n ; i++){
		int ww , aa , ss;
		cin >> ww >> aa >> ss;
		int k = 1;
		while(k <= ss){
			cnt++;
			w[cnt] = k * ww , a[cnt] = k * aa;
			ss -= k , k *= 2;
		}
		if(ss > 0){
			cnt++;
			w[cnt] = ss * ww , a[cnt] = ss * aa;
		}
	}

	for(int i = 1 ; i <= cnt ; i++){
		for(int j = v ; j >= w[i] ; j--){
			f[j] = max(f[j] , f[j - w[i]] + a[i]);
		}
	}
	cout << f[v] << endl;
	return 0;
} 