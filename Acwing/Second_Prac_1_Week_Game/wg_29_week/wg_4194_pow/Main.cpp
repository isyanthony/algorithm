#include<iostream>
#include<cmath>
using namespace std;

const double basic = 1.00011;

double methodOne(int n , int t);

int main(){
    int n , t;
    cin >> n >> t;
    double res = methodOne(n , t);
    printf("%6lf",res);
    return 0;
}

double methodOne(int n , int t){
    return n * pow(basic , (double)t);
}