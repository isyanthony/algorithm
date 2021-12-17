#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a[] = { 1 , 2 , -2 , -3 ,2 , -1 , 0};
    sort(a,a+7);
    int res = 2 ^ 5;
    for(auto i : a){
        cout << i << " ";
    }
    return 0;
}