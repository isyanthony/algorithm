#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

typedef pair<int,int> PII;

const int N = 300010;
int a[N] , s[N];
vector<int> alls;
vector<PII> add , query;

int find(int x){
    int l = 0 , r = alls.size() - 1;
    while (l < r){
        int mid = (l + r) >> 1;
        if(alls[mid] >= x) r = mid;
        else l = mid + 1;
    }
    return r + 1;
}

int main(){
    int n , m;
    cin >> n >> m;
    int x , c;
    for(int i = 0 ; i < n ; i++){
        cin >> x >> c;
        alls.push_back(x);
        add.push_back({x , c});
    }
    int l , r;
    for(int i = 0 ; i < m ; i++){
        cin >> l >> r;
        alls.push_back(l);
        alls.push_back(r);
        query.push_back({l , r});
    }
    
    sort(alls.begin(),alls.end());
    alls.erase(unique(alls.begin(),alls.end()),alls.end());
    
    for( auto item : add){
        x = find(item.first);
        a[x] += item.second;
    }
    
    for(int i = 1 ; i <= alls.size(); i++) s[i] = s[i-1] + a[i];
    
    for( auto item : query){
        l = find(item.first) , r = find(item.second);
        cout << s[r] - s[l - 1] << endl;
    }
    return 0;
    
}
