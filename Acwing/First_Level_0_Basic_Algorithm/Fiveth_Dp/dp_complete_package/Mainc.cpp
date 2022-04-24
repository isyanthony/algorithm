 #include<iostream>
using namespace std;
const int N = 1010;
int f[N][N];
int n , v;
int a[N] , w[N];

int main(){
	cin >> n >> v;
	for(int i = 1 ; i <= n ; i++){
		cin >> w[i] >> a[i];
	}

	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= v ; j++){
			for(int k = 0 ; k * w[i] <= j ; k++){
				f[i][j] = max(f[i - 1][j] , f[i - 1][j - k * w[i]] + k * a[i]);
			}
		}
	}
	cout << f[n][v] << endl;
	return 0;
}


// 递推
// f[i][j] 		= max(  f[i - 1][j] , f[i - 1][j - w] + a , f[i - 1][j - 2 * w] + 2 * a , ··· , f[i - 1][j - k * w] + k * a , ···)
// f[i][j - w]  = max(	f[i - 1][j - w] , f[i - 1][j - 2 * w] + a , ··· , f[i - 1][j - k * w] + (k - 1) * a , ···)	

// 故 f[i][j] = max(f[i][j - w] + a , f[i - 1][j]);
// 如果优化到一维 那么f[i][j] 存储的为上一轮 f[i - 1][j] 那么式子可以进一步优化
// f[j] = max(f[j - w] + a + f[j]);

// 一维dp
// #include<iostream>
// using namespace std;
// const int N = 1010;
// int f[N];
// int n , v;
// int a[N] , w[N];

// int main(){
// 	cin >> n >> v;
// 	for(int i = 1 ; i <= n ; i++){
// 		cin >> w[i] >> a[i];
// 	}

// 	for(int i = 1 ; i <= n ; i++){
// 		for(int j = w[i] ; j <= v ; j++){
// 			f[j] = max(f[j] , f[j - w[i]] + a[i]);
// 		}
// 	}
// 	cout << f[v] << endl;
// 	return 0;
// }