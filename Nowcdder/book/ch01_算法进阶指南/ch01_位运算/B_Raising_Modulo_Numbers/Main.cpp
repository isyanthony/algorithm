#include<iostream>
using namespace std;
typedef long long ll;

int power(int a ,int b ,int p){
    int ans = 1;
    while( b ){
        if(b & 1) ans = (ll) ans * a % p;
        a = (ll) a * a % p;
    }
    return ans % p;
}

int main(){
    int num;
    cin >> num;
    while( num-- ){
         int p , h , a , b , ans;
        cin >> p >> h;
    
        while( h-- ){
            cin >> a >> b;
            ans += (power(a , b , p) % p);
        }
        cout << ans << endl;
    } 
}