#include<bits/stdc++.h>
using namespace std;
const int N = 1010;
int n , m;
char a[N][15];
int f[N][N];

int solve(char g[] , char s[]){
    int n = strlen(g + 1) , m = strlen(s + 1);
    for(int i = 0 ; i <= n ; i++) f[i][0] = i;
    for(int j = 0 ; j <= m ; j++) f[0][j] = j;
    
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= m ; j++){
            int t = 1;
            // 添加一个 / 删除一个
            f[i][j] = min(f[i - 1][j] + 1 , f[i][j - 1] + 1);
            if(g[i] == s[j]) t = 0;
            f[i][j] = min(f[i][j] , f[i - 1][j - 1] + t);
        }
    }
    return f[n][m];
}
int main(){
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++) scanf("%s", a[i] + 1);
    while(m--){
        int res = 0 , t;
        char s[N];
        scanf("%s%d", s + 1 , &t);
        for(int i = 1 ; i <= n ; i++){
            int ans = solve(a[i] , s);
            if(ans <= t) res++;
        }
        cout << res << endl;
    }

    return 0;
}