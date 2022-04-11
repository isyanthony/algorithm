#include<bits/stdc++.h>
using namespace std;
 
string solve(int n){
    if(n == 1){
        return "1";
    }
    return solve(n - 1) + " " + to_string(n) +" "+ solve(n - 1);
}
int main(){
    int n;
    cin >> n;
    string ans = solve(n);
    cout << ans << endl;
}