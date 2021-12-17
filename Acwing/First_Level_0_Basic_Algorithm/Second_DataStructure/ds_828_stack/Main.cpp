#include<iostream>
using namespace std;

const int N = 100010;
int st[N] , tt = 0;
void push(int x){
    st[++tt] = x;
}

int pop(){
    if(tt > 0){
        tt--;
        return st[tt + 1];
    }
}

int query(){
    return st[tt];
}
int main(){
    int m;
    cin >> m;
    while(m--){
        string op;
        int x;
        cin >> op;
        if(op == "query"){
            int res = query();
            cout << res << endl;
        }else if(op == "push"){
            cin >> x;
            push(x);
        }else if(op == "pop"){
            int res = pop();
            // cout << res << endl;
        }else if(op == "empty"){
            string res = tt > 0 ? "NO" : "YES";
            cout << res << endl;
        }
    }
}