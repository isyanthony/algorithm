#include<iostream>
using namespace std;

int lowbit(int x){
    return x & -x;
}

int main(){
    int n ;
    cin >> n;
    while(n--){
        int x , number = 0;
        cin >> x;
        while(x) x -= lowbit(x),number++;
        cout << number << " " ;
    }
    return 0;
}