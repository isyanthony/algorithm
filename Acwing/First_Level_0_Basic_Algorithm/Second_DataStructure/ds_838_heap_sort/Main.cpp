#include<iostream>

using namespace std;
const int N = 100010;
int a[N] , cnt = 0;

void down(int x){
    int t = x;
    if(2 * x <= cnt && a[2 * x] < a[t]) t = 2 * x;
    if(2 * x + 1 <= cnt && a[2 * x + 1] < a[t]) t = 2 * x + 1;
    if(t != x) {
        swap(a[t] , a[x]);
        down(t);
    }
}

int main(){
    int n , m;
    cin >> n >> m;
    for(int i = 1 ; i <= n ; ++i){
        scanf("%d" , &a[i]);
    }
    cnt = n;
    for(int i = n / 2 ; i ; --i) down(i);
    
    while(m--){
       printf("%d " , a[1]);
       a[1] = a[cnt--];
       down(1);
    }
}