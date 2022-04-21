#include<iostream>
using namespace std;
const double CM = 2.54;
const double MM = 10;
const double YC = 12;
int n;
int main(){
	cin >> n;
	double res = n * YC * CM * MM;
	if(res - ((int) n * YC * CM * MM) == 0) printf("%d\n" , (int)res);
	else printf("%.1lf" , res);
	return 0;
}