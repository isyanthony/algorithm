#include<iostream>
using namespace std;
const int N = 2001;
int a[N];
int main(){
	int n , k;
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin >> k;
		a[k] = a[k] + 1;
	}

	for(int i = 0 ; i <= N ; i++){
		if(a[i] == 0){
			cout << i << endl;
			break;
		}
	}
	return 0;
}