#include<iostream>
#include<cstring>
using namespace std;
const int N = 100010;
string p , s;
int ne[N];
int main(){
    int n , m;
    cin >> n >> p;
    // cin >> m >> s;
    
    for(int i = 1 , j = 0; i < n ; i++){
        while(j && p[i] != p[j]) j = ne[j - 1];
        if( p[i] == p[j]) j++;
        ne[i] = j;
    }

    // for(int i = 0 , j = 0 ; i < m ; i++){
    //     while( j && s[i] != p[j]) j =  ne[j - 1];
    //     if( s[i] == p[j]) j++;
    //     if( j == n ){
    //         printf("%d " , i - n + 1);
    //         j = ne[j - 1];
    //     }
    // }

    for(int i = 0 ; i < n ; i++){
        cout << ne[i] << " ";
    }
}