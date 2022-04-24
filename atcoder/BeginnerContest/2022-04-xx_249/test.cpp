#include<bits/stdc++.h>
using namespace std;

const int N = 10010;
int a[N];

string binary_search(int len , int target){
	int l = 0 , r = len;
	while(l < r){
		int mid = (l + r ) / 2;
		if(a[mid] >= target) r = mid;
		else l = mid + 1;
	}
	return a[l] == target ? "true" : "false";
}
int main(){
	char c;
	int t = 0 , target;
	while(true){
		cin >> c;
		if(c == ']') break;
		cin >> a[t++];
	}
	cin >> c >> target;
	
	sort(a , a + t);
	cout << binary_search(t , target) << endl;
	return 0;
}