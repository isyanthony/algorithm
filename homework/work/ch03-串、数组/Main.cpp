#include<iostream>
using namespace std;
const int N = 100010;

int ne[N];

void next(string p){
	int len = p.length();
	int i = 0 , j = 1;
	while(j < len){
		if(i && p[i] != p[j]) i = ne[i - 1];
		else if(p[i] == p[j]) i++;
		ne[j++] = i;
	}
}

int search(string & a , string & b , int next[]){
	int alen = a.length() , blen = b.length();
	for(int i = 0 , j = 0 ; i < blen ; i++){
		if(b[i] == a[j]) j++;
		else if(j && b[i] != a[j]) j = next[j - 1];
		if(j == alen){
			return i - alen + 1;
		}
	}
	return -1;
}

int main(){
	string a , b;
	cin >> a;
	cin >> b;
	next(a);
	int index = search(a , b , ne);
	while(index != -1) {
		b.erase(index , a.length());
		index = search(a , b , ne);
	}
	cout << b << endl;
}