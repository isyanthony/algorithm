#include<iostream>
using namespace std;
const int N = 100010;

// ne 数组记录该节点的下一个节点值
// v 数组记录当前节点的值
// h 记录头节点 , idx 记录当前使用的下标 , size 记录栈大小
int ne[N] , v[N] , h = -1, idx , size;

void push(int x){
	v[idx] = x , ne[idx] = h , h = idx++ , size++;
}

int pop(){
	int t = -1;
	if(h != -1){
		t = v[idx - 1];
		h = ne[--idx];
		size--;
	}
	return t;
}

bool ieEmpty(){
	return size == 0;
}

int main(){
	push(3);
	push(5);
	push(2);
	cout << pop() << endl;
	push(7);
	cout << pop() << endl;
	cout << pop() << endl;
	cout << pop() << endl;
	cout << pop() << endl;
}