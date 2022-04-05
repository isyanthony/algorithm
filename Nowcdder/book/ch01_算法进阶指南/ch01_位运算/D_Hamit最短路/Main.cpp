#include<bits/stdc++.h>
using namespace std;
int n;
int f[1 << 20][20];
int weigh[30][30];

int calc(){
    //将 f 数组中的值初始为最大值
    memset(f , 0x3f , sizeof(f));
    // 起点的值为最0
    f[1][0] = 0;

    // 遍历所有情况
    for(int i = 1 ; i < 1 << n ; i++){
        //遍历到达的点
        for(int j = 0 ; j < n ; j++){
            //判断是否有已经走过的点 j
            if(i >> j & 1){
                //若存在走过的点 j 则遍历除 j 以外的其它点
                //遍历到 j 点前的点
                for(int k = 0 ; k < n ; k++){
                    // 判断石佛楼有已经走过的且非 j 点的其它点
                    if((i ^( 1 << j)) >> k & 1){
                        //若存在,则遍历取从 k 点到 j 点花费的最少的那个点
                        f[i][j] = min(f[i][j] , f[i ^ (1 << j)][k] + weigh[k][j]);
                    }
                }
            }
        }
    }
    return f[(1 << n) - 1][n - 1];
}

int main(){
    cin >> n;
    // 读取无向图权重
    for (int i = 0; i < n; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> weigh[i][j];
        }
    }

    cout << calc() << endl;
    return 0;
    
}