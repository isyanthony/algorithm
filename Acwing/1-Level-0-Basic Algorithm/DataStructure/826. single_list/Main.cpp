#include<iostream>
using namespace std;

const int N = 100010;
// head 表示头节点, 不存在节点为 -1
// idx 表示可用节点
// v 存储节点值 ne表示下一个节点的下标
int v[N] , ne[N] , head , idx;

void init(){
    head = -1;
    idx = 0;
}
// 插入头节点位置
void add_to_head(int x){
    v[idx] = x , ne[idx] = head , head = idx++;
}

void add_back(int pos , int x){
    v[idx] = x , ne[idx] = ne[pos - 1] , ne[pos - 1] = idx++;
}

void remove(int pos){
    ne[pos - 1] = ne[ne[pos - 1]];
}

int main(){
    int n;
    init();
    cin >> n;
    while(n--){
        char c;
        int x , pos;
        cin >> c;
        switch(c){
            case 'H': 
                cin >> x;
                add_to_head(x);
                break;
            case 'I':
                cin >> pos >> x;
                add_back(pos , x);
                break;
            case 'D':
                cin >> pos;
                if(!pos) head = ne[head];
                else remove(pos);
                break;   
        }
    } 
    for(int i = head ; i!=-1 ; i = ne[i]){
            cout<<v[i]<<" ";
    }
}
    