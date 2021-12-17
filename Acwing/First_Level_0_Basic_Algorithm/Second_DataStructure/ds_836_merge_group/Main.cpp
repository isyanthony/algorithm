#include<iostream>
using namespace std;

const int N = 100010;
int q[N];

int find(int x){
    if(q[x] != x) q[x] = find(q[x]);
    return q[x];
}
int main(){
    int n , m;
    cin >> n >> m;
    for(int i = 1; i <= n ; ++i){
        q[i] = i;
    }
    
    char op[2];
    int a , b;
    while(m--){
        scanf("%s%d%d",op , &a , &b);
        if (*op == 'M')q[find(a)] = find(b);
        else
        {
            if (find(a) == find(b)) puts("Yes");
            else puts("No");
        }
    }
    
}