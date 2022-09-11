#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n + 10];
	for(int i = 1 ;  i <= n ; i++) cin >> a[i];
	int d[n + 10];
	int len = 1;
	d[1] = a[1];
	for(int i = 2 ; i <= n ; i++){
		if(d[len] < a[i]) d[++len] = a[i];
		else{
			cout << d[len] << " " << a[i] << " " << endl;
			int l = 1 , r = len + l;
			while(l < r){
				int mid = l + r >> 1;
				if(d[mid] > a[i]) r = mid;
				else l = mid + 1;
			}
			cout << d[r] << " " << a[i] << " " << endl;
			d[r] = a[i];
		}
	}
	cout << len << endl;
	return 0;
}