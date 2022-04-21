#include<iostream>
using namespace std;
const int N = 500010;
long long a[N] , t[4 * N] , v[4 * N];
int n , m;


long long query(int k , int x , int y , int l , int r , long long p){
	p += v[k];
	if(x == l && y == r){
		return p * (r - l + 1) + t[k];
	}
	int mid = (x + y) >> 1;
	if(mid >= r){
		return query(k + k , x , mid , l , r , p);
	}else{
		if(mid < l){
			return query(k + k + 1 , mid + 1 , y , l , r , p); 
		}else{
			return query(k + k , x , mid , l , mid , p) + query(k + k + 1 , mid + 1 , y , mid + 1 , r , p);
		}
	}
}

void add(int k , int x , int  y , int l , int r , int z){
	if(x == l && y == r){
		v[k] += z;
		return;
	}
	t[k] += (r - l + 1) * z;
	int mid = (x + y) >> 1;
	if(l > mid){
		add(k + k + 1 , mid + 1 , y , l , r , z);
	}else {
		if(mid >= r){
			add(k + k , x , mid , l , r , z);
		}else{
			add(k + k , x , mid , l , mid , z) , add(k + k + 1 , mid + 1 , y , mid + 1 , r , z);
		}
	}
}

void buildtree(int k , int l , int r){
	v[k] = 0;
	if(l == r) {
		t[k] = a[l];
		return;
	}
	int mid = (l + r) >> 1;
	buildtree(k + k , l , mid) , buildtree(k + k + 1 , mid + 1 , r);
	t[k] = t[k + k + 1] + t[k + k];
}

int main(){
	cin >> n >> m;
	for(int i = 1 ; i <= n ; i++) cin >> a[i];
	buildtree(1 , 1 , n);
	while(m--){
		int o;
		cin >> o;
		if(o == 2){
			int x;
			cin >> x;
			cout << query(1 , 1 , n , x , x , 0LL) << endl;
		}else{
			int x , y , z;
			cin >> x >> y >> z;
			add(1 , 1 , n , x , y , z);
		}
	}
} 