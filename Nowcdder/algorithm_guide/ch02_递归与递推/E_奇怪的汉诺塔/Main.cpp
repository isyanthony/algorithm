#include<bits/stdc++.h>
using namespace std;
int d[15] , f[15];

int main(){
    
    memset(f, 0x3f, sizeof f);
    d[1] = f[1] = 1;
    f[0] = 0;

    for(int i = 1 ; i <= 12 ; i++){
        d[i] = d[i - 1] * 2 + 1;
    }

    for(int i = 1 ; i <= 12 ; i++){
        for(int j = 0 ; j < i ; j++){
            f[i] = min(f[i] , f[j] * 2 + d[i - j]);
        }
    }

    for (int i = 1 ; i <= 12 ; i++) cout << f[i] << endl;
    return 0;
    
}