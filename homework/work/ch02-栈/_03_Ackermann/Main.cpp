#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
typedef pair<int , int > PII;

// 当 m = 2 , n = 1
// => ack(2 , 1) => ack(1 , ack(2 , 0))
// ==>ack(1 , ack(2 , 0)) => ack(2 , 0) => ack(1 , 1) => ack(0 , ack(1 , 0))
// ====> ack(1 , 0) => ack(0 , 1) = 2 => ack(0 , ack(1 , 0)) = ack(0 , 2) = 3
// =====> ack(1 , 1) = ack(2 , 0) = 3  => ack(1 , 3) =>  ack(0 , ack(1 , 2)) => ack(1 , 2)
// ======> ack(1 , 2) = ack(0 , ack(1 ， 1)) = ack(0 , 3) = 4 => ack(0 , 4) = 5
// =======> ack(1 , 2) = 5

// 问题1
int ack_1(int m , int n){
	if(m == 0) return n + 1;
	if(n == 0) return ack_1(m- 1 , 1);
	return ack_1(m-1 , ack_1(m , n - 1));
}

const int N = 100010;
// 使用数组模拟顺序栈
PII stack[N];
// l为栈底部指针 , r 为栈顶指针
int l = 0 , r = -1;

bool isEmpty(){
	return r == -1;
}

void push(int x , int y){
	r++;
	cout << "Pust:" << x << " " << y << endl;
	stack[r].first = x , stack[r].second = y;
}

void pop(){
	if(!isEmpty())
		r--;
}

PII top(){
	if(l <= r) return stack[r];

}


int size(){
	return isEmpty() ? 0 : r - l + 1;
}


// 问题_2
int ack_2(int m , int n){
	push(m , n);
	memset(res , -1 , sizeof res);
	int r = 0;
	cout << m << " " << n << endl;
	while(!isEmpty()){
		PII t = top();
		pop();
		int mm = t.first , nn = t.second;
		if(mm == 0){
			r = nn + 1;
			if(isEmpty()) break;
			t = top();
			pop();
			push(t.first , r);
		}else if(nn == 0){
			push(mm - 1 , 1);
		}else{
			push(mm - 1 , -1);
			push(mm , nn - 1);
		}
	}
	return r;
}

int main(){
	cout << ack_2(2 , 1) << endl;
}

