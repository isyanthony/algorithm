#include<iostream>
using namespace std;

const int N = 100010;

int q[3100010][2] , idx , a[N];

void insert(int s){
    int p = 0;
    for(int i = 30 ; i >= 0 ; --i){
        int u = s >> i & 1;
        if(!q[p][u]) q[p][u] = ++idx;
        p = q[p][u];
    }
}

int query(int s){
    int p = 0 , res = 0;
    for(int i = 30; i >= 0 ; --i){
        int u = s >> i & 1;
        if(q[p][!u]){
            res += 1 << i;
            p = q[p][!u];
        }else p = q[p][u];
    }
    return res;
}

int main(){
    int n;
    scanf("%d" , &n);
    for(int i = 0 ; i < n ; ++i){
        scanf("%d" , &a[i]);
        insert(a[i]);
    }
    int ans = 0;
    for(int i = 0 ; i < n ; ++i){
        ans = max(ans , query(a[i]));
    }
    cout << ans << endl;
}