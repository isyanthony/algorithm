#include<iostream>
using namespace std;

typedef unsigned long long ULL;
const int N = 100010;
const int P = 131;
char str[N];
int h[N] , p[N];

ULL get(int l , int r){
    return h[r] - h[l - 1]*p[r - l + 1];
}

int main(){
    int n , m;
    cin >> n >> m;
    cin >> str + 1;
    p[0] = 1;
    for(int  i = 1 ; i <= n ; i++){
        h[i] = h[i - 1] * P + str[i];
        p[i] = p[i - 1] * P;
    }
    int a , b , c ,d;
    while(m--){
        cin >> a >> b >> c >>d;
        if(get(a , b) == get(c , d))puts("Yes");
        else puts("No");
    }
}