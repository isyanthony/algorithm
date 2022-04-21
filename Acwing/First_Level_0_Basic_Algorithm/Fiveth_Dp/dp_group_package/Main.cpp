#include<bits/stdc++.h>
using namespace std;

const int N = 210;
int w[N][N] , v[N][N] , s[N] , dp[N];
int n , m;


// 分组背包问题
int main(){
	cin >> n >> m;;
	for(int i = 1 ; i <= n ; i++){
		int t;
		cin >> t;
		s[i] = t;
		for(int j = 1 ; j <= t ; j++){
			cin >> w[i][j] >> v[i][j];
		}
	}

	for(int i = 1 ; i <= n ; i++){
		for(int j = m ; j >= 0 ; j--){
			for(int k = 1 ; k <= s[i] ; k++){
			    if(j >= w[i][k])
				    dp[j] = max(dp[j] , dp[j - w[i][k]] + v[i][k]);
			}

		}
	}
	cout << dp[m] << endl;
	return 0;
}