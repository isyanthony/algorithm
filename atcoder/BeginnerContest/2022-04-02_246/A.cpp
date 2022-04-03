#include<iostream>
#include<unordered_set>
using namespace std;
typedef unordered_set<int> SetI;

SetI x , y;
int a , b;
int main(){
	for(int i = 0 ; i < 3 ; i++){
		cin >> a >> b;
		if(x.count(a)) { 
			x.erase(a); 
		}else x.insert(a);

		if(y.count(b)) { 
			y.erase(b); 
		}else y.insert(b);
	}

	int X = 0, Y = 0;
	for(auto i : x) X = i;

	for(auto i : y) Y = i;
	
	cout << X << " " << Y << endl;
	return 0;
}