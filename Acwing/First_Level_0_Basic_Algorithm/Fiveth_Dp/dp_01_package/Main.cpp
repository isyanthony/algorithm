#include<iostream>
using namespace std;


// 采用二维dp
const int N = 1010;

// dp[i][j] 的含义为 i 表示在选取前i件物品时 , 背包容量为 j 时能选取的最大价值
int dp[N][N];
int n , v , a[N] , w[N];

int main(){
	cin >> n >> v;
	for(int i = 1 ; i <= n ; i++){
		cin >> a[i] >> w[i];
	}


	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= v ; j++){
			if(j < a[i]) dp[i][j] = dp[i - 1][j];
			else dp[i][j] = max(dp[i - 1][j] , dp[i - 1][j - a[i]] + w[i]);
		}
	}

	cout << dp[n][v] << endl;
	return 0;
}

// 一维dp
// #include<iostream>
// using namespace std;

// const int N = 1010;
// int dp[N];
// int n , v , a[N] , w[N];

// int main(){
// 	cin >> n >> v;
// 	for(int i = 1 ; i <= n ; i++){
// 		cin >> a[i] >> w[i];
// 	}


// 	for(int i = 1 ; i <= n ; i++){
//    	//采用滚动数组的形式进行存储
// 		for(int j = v ; j >= a[i] ; j--){
// 			// 否则在不选取与选取中取最大值即可
// 			dp[j] = max(dp[j] , dp[j - a[i]] + w[i]);
// 		}
// 	}

// 	cout << dp[v] << endl;
// 	return 0;
// }