#include<iostream>
using namespace std;
const int N = 100010;
int arr [N],temp[N];
int main(){
    int n ;
    int res = 0;
    int j = 0;
    // scanf 的执行效率比 cin 的执行效率要高
    scanf("%d", &n);
    for (int i = 0; i < n; i ++ ) scanf("%d", &arr[i]);
    for(int i = 0  ; i < n ; ++i){
        temp[arr[i]]++;
        while(temp[arr[i]] > 1){
            temp[arr[j]]--;
            j++;
        }
        res = max(res , i-j+1);
    }
    cout << res << endl;
    return 0;
}