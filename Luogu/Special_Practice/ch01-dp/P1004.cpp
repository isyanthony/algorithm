#include<bits/stdc++.h>
using namespace std;

/*
	四维dp , f[i][j][k][t] , i , j 分别表示第一次走的位置的坐标， k , t 表示第二次走的坐标
*/
const int N = 11;
int w[N][N] , f[N][N][N][N];
int n;
int main(){
	cin >> n;
	int a , b , wi;
	while(cin >> a >> b >> wi && a){
		w[a][b] = wi;
	}

	for(int i = 1 ; i<= n ; i++)
		for(int j = 1 ; j <= n ; j++)
			for(int k = 1 ; k <= n ; k++)
				for(int t = 1 ; t <= n ; t++){
					f[i][j][k][t] = max(max(f[i - 1][j][k - 1][t] , f[i][j - 1][k][t - 1]) , max(f[i - 1][j][k][t -1] , f[i][j - 1][k - 1][t]));
					if(i == k && j == t) f[i][j][k][t] += w[i][j];
					else f[i][j][k][t] += (w[i][j] + w[k][t]);
				}

	cout << f[n][n][n][n] << endl;
	return 0;
}