#include<iostream>
using namespace std;

const int N = 100010;
// l 记录左节点 r 记录右节点 l[1]为右端点 r[0] 为左端点
int l[N] , r[N];
// v 记录节点值 ， idx 记录可用下标
int v[N] , idx;

void init(){
    idx = 2;
    l[1] = 0 , r[0] = 1;
}

// 值插入 pos 的右边的
void insert(int pos , int x){
    v[idx] = x;
    r[idx] = r[pos];
    l[idx] = pos;
    l[r[pos]] = idx;
    r[pos] = idx ++;
    
}

void remove(int pos){
    // pos的右节点的左节点等于pos的左节点
    l[r[pos]] = l[pos];
    r[l[pos]] = r[pos];
}

int main(){
    int n;
    cin >> n;
    init();
    while(n--){
        string op;
        int pos , x;
        cin >> op;
        if(op == "R"){
            cin >> x;
            insert(l[1] , x);
        }else if(op == "D"){
            cin >> pos;
            remove(pos + 1);
        }else if(op == "L"){
            cin >> x;
            insert(0 , x);
        }else if(op == "IL"){
            cin >> pos >> x;
            insert(l[pos + 1] , x);
        }else if(op == "IR"){
            cin >> pos >> x;
            insert(pos + 1 , x);
        }
    }
    
    for (int i = r[0]; i != 1; i = r[i]) cout << v[i] << ' ';
}