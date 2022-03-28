#include<bits/stdc++.h>
using namespace std;

int n;
int path[11];
bool vt[11];


void solve_1(int u){
    if(u == n + 1){
        for(int i = 1 ; i <= n ; i++) cout << path[i] << " ";
        cout << endl;
        return;
    }

    for(int i = 1 ; i <= n ; i++){
        if(!vt[i]){
            vt[i] = true;
            path[u] = i;
            solve_1(u + 1);
            vt[i] = false;
        }
    }


}

int main(){
    cin >> n;
    solve_1(1);
    return 0;
}