#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef pair<int , int> PII;

void merge(vector<PII> &data){
    vector<PII> res;
    sort(data.begin() , data.end());
    int l = data[0].first , r = data[0].second;
    res.push_back({l , r});
    for(int i = 1 ; i < data.size() ; i++){
        if( data[i].first > r ){
            l = data[i].first;
            res.push_back({ l , r});
        }
        r = max(r,data[i].second);
    }
    data = res;
    
}

int main(){
    int n;
    scanf("%d" , &n);
    int l , r;
    vector<PII> data;
    while(n--){
        scanf("%d %d",&l , &r);
        data.push_back({l , r});
    }
    merge(data);
    cout << data.size() << endl;
}