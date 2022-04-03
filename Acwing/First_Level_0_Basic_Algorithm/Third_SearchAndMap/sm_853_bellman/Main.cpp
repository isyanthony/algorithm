#include<bits/stdc++.h>
using namespace std;
const int N = 510 , M = 10010;
int n , m , k;
int dist[N] , backup[N];
struct Edge {
    int a , b , wi;
}edges[M];

void bellman(){
	memset(dist , 0x3f , sizeof dist);
	dist[1] = 0;

	for(int i = 1 ; i <= k ; i++){
		memcpy(backup , dist , sizeof dist);
		for(int i = 0 ; i < m ; i++){
			auto & e = edges[i];
			dist[e.b] = min(dist[e.b] , backup[e.a] + e.wi);
		}
	}
	if(dist[n] > 0x3f3f3f / 2) cout << "impossible" << endl;
	else cout << dist[n] << endl;
}

int main(){
	scanf("%d%d%d" , &n , &m , &k);
    for (int i = 0; i < m; i ++ ){
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        edges[i] = {a, b, c};
    }
	bellman();
	return 0;
}