#include<bits/stdc++.h>
using namespace std;

int main(){
	double a , b;
	cin  >> a >> b;
	double len  = sqrt(a * a + b * b);
	printf("%.12lf %.12lf" , a / len , b / len);

}