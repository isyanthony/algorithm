#include<iostream>
using namespace std;

double s[7];
int _stoi(string str){
	int s = 1 , res = 0;
	int SZ = str.size();
	for(int i = SZ - 1 ; i >= 0 ; i--){
		res += (str[i] - '0') * s;
		s *= 10;
	}
	return res;
}

int main(){
	char t;
	for(int i = 0 ; i < 7 ; i++){
		 cin >> s[i] >> t;
	} 
	int c , f;
	cin >> c >> f;
	double res = s[i];
    if(f) res = gailu * 0.01;
    else res = res * 0.99;
	printf("%.2lf%\n" , res);
	return 0;
}