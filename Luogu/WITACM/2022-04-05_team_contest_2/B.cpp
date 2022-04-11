#include<iostream>
using namespace std;
const int N = 5e6 + 5;
int n , p;
int a[N] , s[N];
int ans = 0x3f3f3f3f;
int main(){
	scanf("%d%d" , &n , &p);
	for(int i = 1 ; i <= n ; i++) cin >> a[i];

	int x , y , z;
	for(int i = 0 ; i < p ; i++){
		 cin >> x >> y >> z;
		 s[x] += z , s[y + 1] -= z;
	}

	for(int i = 1 ; i <= n ; i++) s[i] = s[i - 1] + s[i];

	for(int i = 1 ; i <= n ; i++){
		a[i] += s[i];
		ans = min(ans , a[i]);
	}
	cout << ans << endl; 
	return 0;
}

