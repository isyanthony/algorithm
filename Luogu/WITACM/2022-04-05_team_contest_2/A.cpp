#include<iostream>
using namespace std;
bool st[110] , used;
string s;
int n;
int main(){
	cin >> n;
	cin >> s;
	int ans = 0;
	for(int i = 1 ; i < n ; i++){
		if(!st[i] && !st[i - 1]){
			if( s[i] == 'K' && s[i - 1] == 'V') {
				ans++ , st[i] = st[i - 1] = true;
				i++;
			}
		}
	}


	for(int i = 1 ; i < n ; i++){
		if(!st[i] && !st[i - 1] && !used && s[i] == s[i - 1]) {
			ans++ , st[i] = st[i - 1] = used = true;
			i++;
		}
	}
	cout << ans << endl;
	return 0;
}
