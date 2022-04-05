#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll res;

ll h(ll x){
	ll t = 0;
	while(x > 1){
		x = (x + 1) >> 1;
		t++;
	}
//     cout << t << endl;
	return t;
}

void dfs(ll i , ll l , ll r){
    res = i;
	if(l == r) return;
	ll mid =  l + r >> 1;
	if(h(mid - l + 1) > h(r - mid)) dfs(i << 1 , l , mid);
	else dfs(i << 1 | 1 , mid + 1 , r);   
}

int main(){
	for(ll i = 1 ; i <= 1e18 ; i++){
        dfs(1LL , 1LL , i);
	    cout << res << ",";
    }
    cout << endl;
	return 0;
}
