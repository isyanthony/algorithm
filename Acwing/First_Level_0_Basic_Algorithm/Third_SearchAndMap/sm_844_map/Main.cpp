#include<bits/stdc++.h>
using namespace std;
typedef pair<int , int > PII;

const int N = 110;
int n , m;
int d[N][N] , g[N][N];

int bfs(){
    queue<PII> q;

    int dx [] = {0 , 0 , 1 , -1} , dy [] = {1 , -1 , 0 , 0};

    memset(d , -1 , sizeof d);
    d[0][0] = 0;
    q.push({0 , 0});

    while(!q.empty()){
        auto t = q.front();
        q.pop();

        for(int i = 0 ; i < 4 ; i ++){
            int x = t.first + dx[i] , y = t.second + dy[i];
            if(x >= 0 && y >= 0 && x < n && y < m && g[x][y] != 1 && d[x][y] == -1){
                d[x][y] = d[t.first][t.second] + 1;
                q.push({x , y});
            }
        }
        
    }

    return d[n - 1][m - 1];

}

int main(){
    scanf("%d%d" , &n , &m);
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            scanf("%d" , &g[i][j]);
        }
    }

    cout << bfs() << endl;
    return 0;
}