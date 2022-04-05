#include<iostream>
using namespace std;


int n , m;
int a[26];

void solve_1(int u , int last){
    if(u == m + 1){
        for(int i = 1 ; i <= m ; i++){
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }
    
    for(int i = last ; i <= n ; i++){
        a[u] = i;
        solve_1(u + 1 , i + 1);
    }
}

int main(){
    cin >> n >> m;
    solve_1(1 , 1);
    return 0;
}