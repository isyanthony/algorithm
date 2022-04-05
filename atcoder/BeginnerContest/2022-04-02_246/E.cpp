#include<bits/stdc++.h>
using namespace std;
const int N = 1510;
typedef pair<int , int> PII;

char m[N][N];
bool vt[N][N];
int n , res;
int x , y , s , t;
queue<pair<int , PII>> q;

int bfs(){
	int dx [] = {1 , -1  , 1 , -1};
	int dy [] = {1 , 1 , -1 , -1};
	q.push({0 , {x , y}});
	vt[x][y] = true;
	while(q.size()){
		auto p = q.front();
		q.pop();
		int step = p.first , aa = p.second.first , bb = p.second.second;
		if(aa == s && bb == t) return step;
		for(int i = 0 ; i < 4 ; i++){
			int a = aa , b = bb;
			while(m[a][b] != '#' && a >= 0 && a <= n - 1 && b >= 0 && b <= n - 1){
				if(!vt[a][b]){
					vt[a][b] = true;
					q.push({step + 1 ,{a , b}});
				}
				a += dx[i] , b += dy[i];
			}
		}
	}
	return -1;
}

int main(){

	scanf("%d" , &n);
	scanf("%d%d" , &x , &y);
	scanf("%d%d" , &s , &t);
	x-- , y-- , s-- , t--;
	for(int i = 0 ; i < n ; i++){
		 scanf("%s" , m[i]);
	}

	res = bfs();
	cout << res << endl;
	return 0;

}