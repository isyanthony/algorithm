#include<bits/stdc++.h>
using namespace std;

typedef pair<int , int> PII;

const int N = 1e6 + 10;
int h[N] , ne[N] , v[N] , w[N] , dist[N], idx;
int n , m;
bool st[N];
void add(int a , int b , int c){
	v[idx] = b , ne[idx] = h[a] , w[idx] = c , h[a] = idx++;
}

int dijkstra(){
	priority_queue<PII, vector<PII>, greater<PII>> heap;
	memset(dist , 0x3f , sizeof dist);
	// 第一个值为距离 ， 第二个值为坐标
	heap.push({0 , 1});

	// 堆里面存放更新路径找到最短路的时间复杂度为 -1
	while(heap.size()){
		auto t = heap.top();
		heap.pop();
		int ver = t.second , distance = t.first;

		// 如果遍历过则直接跳过
		if(st[ver]) continue;
		st[ver] = true;

		for(int i = h[ver] ; i != -1 ; i = ne[i]){
			int j = v[i];
			if(dist[j] > distance + w[i]){
				dist[j] = distance + w[i];
			}
		}
	}

	if(dist[n] == 0x3f3f3f) retrun -1;
	else return dist[n];


}

int main(){
	scanf("%d %d" , &n , &m);
	memset(h , -1 , sizeof h);
	int a , b , c;
	while(m--){
		scanf("%d %d %d" , &a , &b , &c);
		add(a , b , c);
	}

	int res = dijkstra();
	cout << res << endl;
	return 0;
} 