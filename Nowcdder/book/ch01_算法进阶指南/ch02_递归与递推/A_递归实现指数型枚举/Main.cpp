#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a;

// 方法一 状态压缩
// void solve_1(){
//     for (int i = 0; i < 1 << n; i++){
//         for (int j = 0; j < n; j++){
//             if (i >> j & 1){
//                 cout << j + 1 << " ";
//             }
//         }
//         cout << endl;
//     }
// }

//方法二：递归
void solve_2(int u){
    if(u == n + 1){
        for(int i = 0 ; i < a.size() ; i++){
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }

    solve_2(u + 1);
    a.push_back(u);
    solve_2(u + 1);
    a.pop_back();

}

int main(){
    cin >> n;
    solve_2(1);
    return 0;
}