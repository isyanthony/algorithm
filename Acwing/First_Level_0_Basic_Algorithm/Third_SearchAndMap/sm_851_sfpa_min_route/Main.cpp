#include<bits/stdc++.h>
using namespace std;

const int N = 100010;

int h[N] , v[N] , ne[N] , w[N] , idx;
int n , m;
int dist[N];
bool st[N];
void add(int a , int b , int wi){
	v[idx] = b , ne[idx] = h[a] , w[idx] = wi , h[a] = idx++;
}

int spfa(){
	memset(dist , 0x3f , sizeof dist);
	queue<int> q;
	dist[1] = 0;
	st[1] = true;
	q.push(1);
	while(q.size()){
		auto t = q.front(); q.pop();
		st[t] = false;
		for(int i = h[t] ; i != -1 ; i = ne[i]){
			int j = v[i];
			if(dist[j] > dist[t] + w[i]){
				dist[j] = dist[t] + w[i];
				if(!st[j]){
					q.push(j);
					st[j] = true;
				}
			}
		}
	}

	return dist[n];

}

int main(){
	cin >> n >> m;
	memset(h , -1 , sizeof h);
	int a , b , wi;
	for(int i = 0 ; i < m ; i++){
		cin >> a >> b >> wi;
		add(a , b , wi);
	}
	int res = spfa();
	if(res == 0x3f3f3f3f) cout << "impossible" << endl;
	else cout << res << endl;
	return 0;
}