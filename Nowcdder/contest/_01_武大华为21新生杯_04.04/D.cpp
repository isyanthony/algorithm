#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll res = 0;

ll h(int x){
	ll t = 1;
	while(x > 1){
		x >>= 1;
		t++;
	}
	return t;
}

void dfs(ll i , ll l , ll r){
	res = i;
	if(l == r){
        return;
	}
	ll mid =  (l + r) >> 1;
	if(h(mid - l + 1) > h(r - mid)) dfs(i * 2 , l , mid);
	else dfs(i * 2 + 1 , mid + 1LL , r);
    
}

int main(){
	int t;
	cin >> t;
    while(t--){
        int n;
        cin >> n;
        dfs(1LL , 1LL , n);
	    cout << res << endl;
    }
	return 0;
}
