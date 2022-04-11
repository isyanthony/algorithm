#include<iostream>
using namespace std;

int main(){
	string s;
	cin >> s;
	s = "0" + s;
	s = s.substr(0 , 4);
	cout << s << endl;
	return 0;	
}