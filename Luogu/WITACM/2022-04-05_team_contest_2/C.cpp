#include<bits/stdc++.h>
using namespace std;

int n , x , y , res;

bool isInteger(float x){
	return x - (int) x == 0;
}

int main(){
	scanf("%d" , &n);
	while(n--){
		cin >> x >> y;
		if(x == 0 && y == 0) res = 0;
		else if(isInteger(sqrt(x * x  + y * y))) res = 1;
		else res = 2;
		cout << res << endl;
	}
	return 0;
}