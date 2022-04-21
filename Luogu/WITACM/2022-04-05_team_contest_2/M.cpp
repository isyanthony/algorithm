#include<iostream>
using namespace std;

int main(){
	int l , r;
	cin >> l >> r;
	int res = 0;
	for(int i = l ; i <= r ; i++){
		string s = to_string(i);
		for(int j = 0 ; s[j] ; j++)
			if(s[j] == '2') res++;
	}
	cout << res << endl;
	return 0;

}