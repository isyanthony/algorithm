#include<iostream>
using namespace std;

int main(){
	int a[] = {1 , 2 , 2 , 3 , 4 , 5 , 6 ,6};
	int l = 0 , r = 7;
	int n;
	cin >> n;
	while(l < r){

		// 求第一个大于 n 的值的下标
		// int mid = l + r >> 1;
		// if(a[mid] > n) r = mid;
		// else l = mid + 1;

		// 求第一个大于等于 n 的值的下标
		// int mid = l + r >> 1;
		// if(a[mid] >= n) r = mid;
		// else l = mid + 1;

		// 求最后一个小于 n 的值的下标
		// int mid = l + r + 1 >> 1;
		// if(a[mid] < n) l = mid;
		// else r = mid - 1;

		// 求小于等于 n 的最后的一个值的下标
		// int mid = l + r + 1 >> 1;
		// if(a[mid] <= n) l = mid;
		// else r = mid - 1;

		cout << "#l : " << l << " #r : " << r << " #mid : " << mid << endl;
	}
	
	cout << l << endl;
	return 0;
}