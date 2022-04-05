#include<iostream>
using namespace std;
typedef long long ll;


int power(int a , int b , int p){
    int ans = 1;

    // 当b不为 0  
    while(b){
        // 判断b二进制最低位是否为 1
        if(b & 1) ans = (ll) ans * a % p;
        // b向右移动一位
        b >>= 1;
        a = (ll) a * a % p;
    }
    return ans;
}

int main(){
    int a , b , p;
    cin >> a >> b >> p;
    cout << power(a , b , p) % p << endl;
    return 0;
}