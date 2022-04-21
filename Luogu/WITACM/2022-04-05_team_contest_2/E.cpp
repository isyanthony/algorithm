#include<iostream>
#include<cstring>
using namespace std;
const int N = 210;
// f[i]表示以i为起点时，到达终点所需要的费用
int g[N][N] , f[N];
int n;

int main(){
	cin >> n;
	for(int i = 1 ; i < n ; i++){
		for(int j = i + 1 ; j <= n ; j++){
			cin >> g[i][j];
		}
		f[i] = 0x3f3f;
	}

	f[0] = 0;
	//遍历每个非终点的起始点
	for(int i = n - 1 ; i >= 1 ; i--){
	    //遍历非起点的终点
		for(int j = i + 1 ; j <= n ; j++){
		 	f[i] = min(f[i] , f[j] + g[i][j]);
		}
	}

	cout << f[1] << endl;

	return 0;
}