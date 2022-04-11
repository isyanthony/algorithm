#include<iostream>
using namespace std;
int n , res;

int main(){
	scanf("%d" , &n);
	while(n--){
		int x , y;
		scanf("%d%d" , &x , &y);
		if(x == 0) res = 1;
		else if(y == 0) res = x + 1;
		else res = x + 2 * y + 1;
		cout << res << endl;
	}
	return 0;
}