#include<iostream>
#include<cstring>
using namespace std;
const int N = 550;
int m[N][N] , f[N][N];
int n; 
int main(){
	cin >> n;
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= i ; j++){
			cin >> m[i][j];
		}
	}
	
	for(int i = 0 ; i <= n ; i++){
		for(int j = 0 ; j <= i + 1; j++){
			f[i][j] = -0x3f3f3f3f;
		}
	}

	f[1][1] = m[1][1];
	for(int i = 2 ; i <= n ; i++){
		for(int j = 1 ; j <= i ; j++){
			f[i][j] = max(f[i - 1][j - 1] , f[i - 1][j]) + m[i][j];
		}
	}
	
	int res = -0x3f3f3f3f;
    for (int i = 1; i <= n; i ++ ) res = max(res, f[n][i]);
	cout << res << endl;
	return 0;
}