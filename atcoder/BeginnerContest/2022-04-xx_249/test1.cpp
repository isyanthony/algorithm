#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define pb push_back
#define mm memset
#define LL long long
#define FAST ios::sync_with_stdio(false) , cin.tie(0) , cout.tie(0)
#define rep(i , a , b) for(int i=a;i<=b;i++)
#define per(i , a , b) for(int i=a;i>=b;i--)
const int INF = 0x3f3f3f3f;
const int MINF = 0x3f;

const int N = 100005;
const int MOD = 1e9 + 7;
int a[N];

int main(){
	int n;
	FAST;
	int a[] = {5 , 3 , 2 , 2 , 1 , 0};
	cin >> n;

	int l = 0 , r = 6;
	// 逆序中查找第一个大于a[i]的值的下标
	// while(l < r){
		// int mid = (l + r + 1) >> 1;
	    // if(a[mid] > n) l = mid;
	    // else r = mid - 1; 
	// }
	
	// 逆序中查找第一个小于a[i]的值的下标	
	while(l < r){
		int mid = (l + r ) >> 1;
	    if(a[mid] < n) r = mid;
	    else l = mid + 1; 
	}

	cout << l << endl;
	return 0;

}