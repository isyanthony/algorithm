#include<iostream>

using namespace std;

const int N = 500010;

int n , m , a[N] , f[4 * N] , v[4 * N];

// 区间操作
inline void add(int k , int l , int r , int x , int y){
    f[k] += y;
    if(l == r){
        return;
    }
    int m = (l + r) >> 1;

    if(m < x)
        add(k * 2 + 1 , m + 1 , r , x , y);
    else
        add(k * 2 ,  l , m , x , y);
}

// 计算求和
int calc(int k , int l , int r , int s , int t){
    // cout << "范围：" << l << " , " << r << endl;
    
    if(l == s && r == t){
        return f[k];
    }

    int m = (l + r) >> 1;

    if(s > m)
       return calc(k * 2 + 1, m + 1 , r , s , t);
    else
        if( t <= m)
            return calc(k * 2 , l , m , s , t);
        else
            return calc(k * 2 , l , m , s , m) + calc(k * 2 + 1 , m + 1 , r , m + 1 , t);
        
}


//lazy标记push down
void push_down(int k){
    if(v[k] != 0){
        // //下传懒标记
        // v[k << 1] = v[k];
        // v[k << 1 | 1] = v[k];
        // //更新区间和
        // f[k << 1] += v[k] *  (k << 2 | 1 - k * 4 + 1);
        // f[k << 1 | 1] += v[k] * (k << 2 | 1 - k * 4 + 1);
    }
}

// 构建线段树
inline void buildTree(int k , int l , int r){
    if(l == r){
        f[k] = a[l];
        return;
    }
    int m  = (l + r) >> 1;
    buildTree(k * 2 , l , m);
    buildTree(k * 2 + 1 , m + 1 , r);
    
    f[k] = f[k * 2] + f[k * 2 + 1];
}

int main(){
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++)
        scanf("%d" , &a[i]);
    
    buildTree(1 , 1 , n);

    for(int i = 1 ; i <= m ; i++){
        int k , x , y;
        scanf("%d%d%d",&k , &x , &y);
        if(k == 1) add(1 , 1 , n , x , y);
        else cout << calc(1 , 1 , n , x , y) << endl;
    }
    return 0;
    
}