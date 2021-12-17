#include<iostream>
using namespace std;
const int N = 100010;
int q[N] , hh = 0 , tt = -1;

void push(int x){
    q[++tt] = x;
}

int query(){
    return q[hh];
}

void pop(){
    hh++;
}

int main(){
    string op;
    int x;
    int n;
    cin >> n;
    while(n--){
            cin >> op;
        if(op == "query"){
            cout << query() << endl;
        }else if( op == "push"){
            cin >> x;
            push(x);
        }else if( op == "pop"){
            pop();
        }else{
            string res =  hh <= tt ? "NO" : "YES";
            cout << res << endl;
        }   
    }
}