#include<iostream>
using namespace std;

int main() {

 string s("HelloWorld!");

 s[5] = '\0';

 cout << s.size() << "\t" << s.c_str(); 

}