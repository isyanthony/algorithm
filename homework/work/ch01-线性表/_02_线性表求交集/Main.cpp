#include <bits/stdc++.h>
using namespace std;

vector<int> a , b;

void intersection(vector<int>& a, vector<int>& b) {
    vector<int> c;
    sort(a.begin() , a.end()) , sort(b.begin() , b.end());
    int as = a.size() , bs = b.size();
    int i = 0 , j = 0;
    while(i < as && j < bs){
        if(a[i] == b[j]){
            if(!c.size() || a[i] != c.back()) c.push_back(a[i]);
            i++ , j++;
        }else if(a[i] < b[j]){
            i++;
        }else{
            j++;
        }
    }
    a = c;
}

int main(){
	// 初始化
	int t , i = 0 , j = 0;
	a[0] = 1 , a[1] = 3 , a[2] = 5;
	intersection(a , b);
	return 0;

}