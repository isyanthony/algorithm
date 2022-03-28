#include<bits/stdc++.h>
using namespace std;


int bfs(string start){
    string ans = "12345678x";
    unordered_map<string , int> d;
    queue<string> q;

    d[start] = 0;
    q.push(start);
    int dx[] = {1 , -1 , 0 , 0} , dy[] = {0 , 0 , 1 , -1};

    while(q.size()){
        auto t = q.front();
        q.pop();
        
        int distance = d[t];
        if(t == ans){
            return distance;
        }

        int o = t.find('x');
        int a = o / 3 , b = o % 3;
        for(int i = 0 ; i < 4 ; i++){
            int x = a + dx[i] , y = b + dy[i];
            if(x >= 0 && x < 3 && y >= 0 && y < 3){
                swap(t[o] , t[3 * x + y]);
                if(!d.count(t)){
                    d[t] = distance + 1;
                    q.push(t);
                }
                swap(t[o] , t[3 * x + y]);
            }
        }
    }
    
    return -1;

}

int main(){
    char c;
    string start = "";
    for(int i = 0 ; i < 9 ; i++){
        cin >> c;
        start += c;
    }
    
    cout << bfs(start) << endl;
    return 0;

}