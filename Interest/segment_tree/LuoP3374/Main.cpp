#include<iostream>

using namespace std;

int n , m , a[500010] , f[4 * 500010];


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