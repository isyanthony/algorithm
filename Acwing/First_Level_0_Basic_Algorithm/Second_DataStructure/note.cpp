#include<iostream>
using namespace std;
const int N = 10;
char path[N][N];
bool col[N] , row[N] , dg[2 * N] , udg[2 * N];
int n;

void dfs(int r , int c , int s){
    if(s > n) return;
    if(c == n) c = 0 , r++;
    if(r == n){
        if(s == n){
            for(int i = 0; i < n ; i++) puts(path[i]);
            puts("");
        }
        return;
    }
    path[r][c] = '.';
    dfs(r , c+1 , s);
    if(!col[c] && !row[r] && !dg[r + c] && !udg[r - c + 10] ){
        col[c] = row[r] = dg[r + c] = udg[r - c + 10] = true;
        path[r][c] = 'Q';
        dfs(r , c + 1 , s + 1);
        path[r][c] = '.';
        col[c] = row[r] = dg[r + c] = udg[r - c + 10] = false;
    }
    
}
int main(){
    cin >> n;
    dfs(0 , 0 , 0);
    return 0;
}