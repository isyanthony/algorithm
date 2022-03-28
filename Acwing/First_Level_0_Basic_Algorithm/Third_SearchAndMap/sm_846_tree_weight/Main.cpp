#include<bits/stdc++.h>
using namespace std;

const int N  = 100010;

int h[N] , e[N]  , ne[N] , idx;
int n , ans = N;
bool st[N];
int dfs(int u){
    
    st[u] = true;
    int sum = 1 , res = 0;
    for(int i = h[u] ; i != -1 ; i = ne[i]){
        int j = e[i];
        if(!st[j]){
            int s = dfs(j);
            sum += s;
            res = max(s , res);
        }
    }

    res = max(res , n - sum);
    ans = min(ans , res);

    return sum;
}

void add(int a, int b){
    e[idx] = b , ne[idx] = h[a] , h[a] = idx++;
}

int main(){
    cin >> n;
    memset(h , -1 ,sizeof h);
    while(n--){
        int a , b;
        cin >> a >> b;
        add(a , b);
        add(b , a);
    }

    dfs(1);
    
    cout << ans << endl;
    return 0;
}