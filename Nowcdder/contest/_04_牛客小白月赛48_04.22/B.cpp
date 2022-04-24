#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
int a[N] , b[N];
vector<pair<pair<int , int> , int>> q;
int main(){
    int n , len , index = 0;
    cin >> n >> len;
    for(int i = 1 ; i <= n ; i++){
        int a , b;
        cin >> a >> b;
        q[i] = make_pair(make_pair(a,b) , i);
    }
    
    sort(q.begin() , q.end());
    for(int i = q[0].first.first , max = q[q.size() - 1].first.second ; i + len - 1 <= max ; i++){
        int j = i + len - 1;
        if(i >= q[i].first.first && i <= q[i].first.second){
            a[index]++;
            b[index++] += q[i].second;
        }
    }
    
    int count = 0 , maxI = -1 , maxQ = -1;
    for(int i = 0 ; i < index ; i++){
        if(a[i] >= maxI){
            if(a[i] == maxI && b[i] == maxQ){
                count++;
                continue;
            }else {
                maxI = a[i];
                maxQ = b[i];
                count = 1;
            }
        }
    }
    
    cout << count << endl;
    return 0;
}