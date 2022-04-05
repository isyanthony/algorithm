#include<iostream>
#include<cstring>
using namespace std;
typedef long long ll;
const int N = 3e5+10;
int n , m ;
int h[N] , v[N] , ne[N] , idx;
int r[N];

void add(int a , int b){
	v[idx] = b , ne[idx] = h[a] , h[a] = idx++;
}

void sovle(int x){
	for(int i = h[x] ; i != -1 ; i = ne[i]){
		int j = v[i];
		if(r[j] < r[x]){
			r[j] = r[x];
			sovle(j);
		}
	}

}

int main(){
	scanf("%d%d" , &n , &m);
    memset(h , -1 , sizeof h);
	for(int i = 1 ; i <= n ; i++) scanf("%d" , &r[i]);
	while(m--){
		int a , b;
		cin >> a >> b;
		add(b , a);
	}
	
	for(int i = 1 ; i <= n ; i++){
		sovle(i);
	}
	ll res = 0;
	for(int i = 1 ; i <= n ; i++){
		res += r[i];
	}
	cout << res << endl;
	return 0;
}