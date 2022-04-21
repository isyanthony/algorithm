#include<iostream>
using namespace std;
const int N  = 1010;
int a[N] , f[N];
int n;

int main(){
    cin >> n;
    for(int i = 1 ; i <= n ; i++) cin >> a[i];
    
    for(int i = 1 ; i <= n ; i++){
        f[i] = 1;
        for(int j = 1 ; j < i ; j++){
            if(a[i] > a[j]){
                f[i] = max(f[j] + 1 , f[i]);
            }
        }
    }
    
    int res = 0;
    for (int i = 1; i <= n; i ++ ) res = max(res, f[i]);

    printf("%d\n", res);
    return 0;
}