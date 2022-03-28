#include<iostream>
using namespace std;
typedef long long ll;

ll pt(ll a , ll b , ll p){
   ll ans = 0;
   while( b ){
       if(b & 1) ans = (ans + a) % p;
       a = ( a * 2) % p;
       b >>= 1;
   }
    return ans % p;
}

int main(){
    ll a , b , p;
    cin >> a >> b >> p;
    cout << pt(a , b , p) << endl;
    return 0;
}