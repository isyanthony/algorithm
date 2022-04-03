#include<iostream>
#include<cstring>
using namespace std;

const int N = 100010;
int n , m;
bool c[N];
int main(){
	scanf("%d%d" , &n , &m);
	int alive = n;
	int num = 0 , i = 1;
	while(alive != 1){

		if(!c[i]){
			num++;
		}

		if(num == m){
			alive--;
			c[i] = true;
			num = 0;
		}
		i++;
		i = (i % (n + 1)) ? i : 1;
	}

	for(int i = 1 ; i <= n ; i ++)
		if(!c[i]){
			cout << i << endl;
			break;
		}
	return 0;
}