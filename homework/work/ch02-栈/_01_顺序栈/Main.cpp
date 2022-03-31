#include<iostream>
using namespace std;
const int N = 100010;


// 使用数组模拟顺序栈
int stack[N];
// l为栈底部指针 , r 为栈顶指针
int l = 0 , r = -1;

void push(int num){
	stack[++r] = num;
}

int pop(){
	if(l <= r) return stack[r--];
	// throw -1;
	return -1;
}

bool isEmpty(){
	return r == -1;
}

int size(){
	return isEmpty() ? 0 : r - l + 1;
}
int main(){
	push(2), push(3);
	cout << pop() << endl;
}