#include<bits/stdc++.h>
using namespace std;
const int N = 100010;
stack<int> st;
int flag[N];
int tr[4*N];

void solve(){
	st.push(1) , flag[1] = 1;
	int i = 1;
	while(!st.empty()){
		// 遍历左子树
		while(tr[i] != -1){
			i <<= 1;
			// 如果节点不为空则入栈
			if(tr[i] != -1) st.push(i) , flag[i] = 1;
		}

		if(flag[st.top()] == 2){
			cout << tr[st.top()] << " ";
			st.pop();
		}

		i = st.top();
		flag[i] = 2;
		i = i << 1 | 1;
		st.push(i) , flag[i] = 1;
		// cout << i << endl;
	}
}

int main(){
	memset(tr , -1 , sizeof tr);
	tr[1] = 5 , tr[2] = 4 , tr[3] = 3;
	tr[4] = 2 , tr[5] = 1 , tr[6] = 7 , tr[7] = 9;
	tr[8] = 10;
	solve();
	return 0;
}