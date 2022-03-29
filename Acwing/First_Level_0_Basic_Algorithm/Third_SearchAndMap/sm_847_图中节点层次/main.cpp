#include<bits/stdc++.h>
using namespace std;

const int N = 100010;

int v[2 * N] , ne[2 * N] , h[N] , idx;
int q[N] , d[N];
int n , m;

// 建立链表
void add(int a , int b){
	v[idx] = b , ne[idx] = h[a] , h[a] = idx++;
}

int bfs(){
	memset(d , -1 , sizeof d);
	int tt = 0, hh = 0;
	q[0] = 1 , d[1] = 0;

	while(hh <= tt){
		auto t = q[hh++];
		for(int i = h[t] ; i != -1 ; i = ne[i]){
			auto j = v[i];
			if(d[j] == -1){
				d[j] = d[t] + 1;
				q[++t] = j;
			}
		}
	}

	return d[n];

}

int main() {
	memset(h , -1 , sizeof h);
	cin >> n >> m;
	int t = m;
	int a , b;
	while(m--){
		cin >> a >> b;
		add(a , b);
	}

	cout << bfs() << endl;

	return 0;
}