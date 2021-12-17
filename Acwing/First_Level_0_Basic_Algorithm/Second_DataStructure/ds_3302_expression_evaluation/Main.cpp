#include<iostream>
#include<stack>
#include<algorithm>
#include<unordered_map>
using namespace std;
const int N = 100010;
stack<char> op;
stack<int> n;
char str[N];

void calculate(){
    int res = 0;
    auto a = n.top(); n.pop();
    auto b = n.top(); n.pop();
    char ops = op.top(); op.pop();
    if(ops == '+') res = a + b;
    else if(ops == '-') res = b - a;
    else if(ops == '*') res = a * b;
    else res = b / a;
    n.push(res);
}

int main(){
    unordered_map<char, int> pr{{'+', 1}, {'-', 1}, {'*', 2}, {'/', 2}};
    cin >> str;
    for(int i = 0 ; str[i] ; i++){
        char c = str[i];
        if(isdigit(c)){
            int num = c - '0';
            int j = i + 1;
            while(isdigit(str[j])){
                num = num * 10 + str[j++] - '0';
            }
            i = j - 1;
            n.push(num);
        }else{  
            if(c == '('){
                op.push(c);
            }else if( c == ')'){
                while(op.top() != '(') calculate();
                op.pop();
            }else{
                while(op.size() && op.top() != '(' && pr[c] <= pr[op.top()]) calculate();
                op.push(c);
            }
        }
    }
    while (op.size()) calculate();
    cout << n.top() << endl;
}