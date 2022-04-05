#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
    if(n < 3) {
        cout << 0 << endl;
        return 0;
    }
	int times = n / 3;
    int d = n % 3;
    int ans = (times + d / 2) * (times + (d + 1) / 2) * times;
    cout << ans << endl;
	return 0;
}