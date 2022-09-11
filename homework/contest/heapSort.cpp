#include<iostream>
using namespace std;
const int N = 10010;

int f[N] , v[2 * N] , h[N] , w[N] , ne[2 * N], idx; 
struct Edge {
	int a , b , w;
	bool operator <(const Edge & W){
		return w < W.w;
	}
}edges[N];

void add(int a , int b , int wi){
	v[b] = a , h[a] = b , ne[b] = a , w[idx] = wi , h[b] = idx++;
}
int find(int a){
	if(a != p[a]) p[a] = find(p[a]);
	return p[a];
}
void krusal(){
	int k = 0;

	sort(edges , edges + n);
	
	for(int i = 1 ; i <= n ; i++){
		p[i] = i;
	}

	for(int i = 0 ; i < n ; i++){
		int a = find(edges[i].a);
		int b = find(edges[i].b);
		if(a != b){
			f[a] = b;
			k++;
		}
	}
}

int main(){
	
}