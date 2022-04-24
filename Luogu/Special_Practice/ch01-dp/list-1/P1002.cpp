#include<bits/stdc++.h>
using namespace std;
const int N = 50;

long long dp[N][N];
bool mp[N][N];
int n , m , a , b;

int main(){
	cin >> n >> m >> a >> b;
	memset(mp , true , sizeof mp);
	if(n == a && m == b) {
		cout << 0 << endl;
		return 0;
	}
	dp[10][10] = 1LL;
	int dx [] = {1 , 0} , dy [] = {0 , 1};
	// 读取地图
	a += 10; b += 10;
	mp[a][b] = false;
	mp[a - 2][b - 1] = mp[a + 2][b - 1] = mp[a - 2][b + 1] = mp[a + 2][b + 1] = false;
	mp[a - 1][b + 2] = mp[a - 1][b - 2] = mp[a + 1][b + 2] = mp[a + 1][b - 2] = false;

	for(int i = 10 ; i <=10 + n ; i++){
		for(int j = 10 ; j <= 10 + m ; j++){
			if(mp[i][j]){
				if(i) dp[i][j] += dp[i - 1][j];
				if(j) dp[i][j] += dp[i][j - 1];
			}
		}
	}
	cout << dp[n + 10][m + 10] << endl;
	return 0;

}