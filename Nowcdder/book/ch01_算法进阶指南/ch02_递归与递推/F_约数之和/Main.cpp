#include<bits/stdc++.h>
using namespace std;

int main(int a , int b){
    int ans = 1;
    
    while(b){
        if(b & 1) ans = ans * a;
        a *= a;
        b >>= 1;
    }
    return ans;
}
