#include<iostream>
using namespace std;
const int N = 1000010;
int q[N][26] , n , cnt[N] , idx;

void insert(char * s){
    int t = 0;
    for(int i = 0 ; s[i] ; i++){
        int u = s[i] - 'a';
        if(!q[t][u]) q[t][u] = ++ idx;
        t =  q[t][u];
    }
    cnt[t]++;
}

int query(char * s){
    int t = 0 ;
    for(int i = 0 ; s[i] ; i++){
        int u = s[i] - 'a';
        if(!q[t][u]) return 0;
        t = q[t][u];
    }
    return cnt[t];
}
int main(){
    cin >> n;
    char op[2];
    char s[N];
    while(n--){
        cin >> op >> s;
        if( *op == 'I'){
            insert(s);
        }else if( *op == 'Q'){
            cout << query(s) << endl;
        }
    }
}