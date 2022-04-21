#include<iostream>
using namespace std;
const int N = 1010;
int n , m;
char a[N] , b[N];
int f[N][N];

int main(){
    scanf("%d%s" , &n , a + 1);
    scanf("%d%s" , &m , b + 1);
    
    for(int i = 0 ; i <= n ; i++) f[i][0] = i;
    for(int j = 0 ; j <= m ; j++) f[0][j] = j;
    
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= m ; j++){
            int t = 1;
            // 添加一个 / 删除一个
            f[i][j] = min(f[i - 1][j] + 1 , f[i][j - 1] + 1);
            if(a[i] == b[j]) t = 0;
            f[i][j] = min(f[i][j] , f[i - 1][j - 1] + t);
        }
    }
    cout << f[n][m] << endl;
    return 0;
}