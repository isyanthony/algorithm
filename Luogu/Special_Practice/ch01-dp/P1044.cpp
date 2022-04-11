#include<iostream>
using namespace std;
const int N = 25;


// 方法一： dfs搜索 ，f[i][j], i表示操作队列中元素个数 ，j表示栈中元素个数
long f[N][N];
long n;

long solve_dfs(int x , int y){
	if(f[x][y] != 0) return f[x][y];
	if(x == 0) return 1;
	if(y > 0) f[x][y] += solve_dfs(x, y - 1);

	f[x][y] += solve_dfs(x - 1 , y + 1);
	return f[x][y];
}

int main(){
	cin >> n;
	solve_dfs(n , 0);
	cout << f[n][0] << endl;
	return 0;
}