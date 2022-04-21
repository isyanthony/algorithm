#include<bits/stdc++.h>
using namespace std;
string str;
stack<char> num;
stack<char> op;
stack<int> ca;
bool isHigh(char signOb , char compareOb){
	if((signOb == '+' || signOb == '-') && (compareOb == '*' || compareOb == '/'))//低于
        return false;
    else if((signOb == '+' || signOb == '-') && (compareOb == '+' || compareOb == '-')) //相同
        return false;
    else if((signOb == '*' || signOb == '/') && (compareOb == '*' || compareOb == '/')) //相同
        return false;
    else if((signOb == '*' || signOb == '/') && (compareOb == '+' || compareOb == '-')) //高于
        return true;

    return false;
}
string transfer(string s){
	for(int i = 0 ; s[i] ; i++){
		if(s[i] >= '0' && s[i] <= '9'){
			// cout << "#s[i]: " << s[i] << endl;
			num.push(s[i]);
		}else if(s[i] == '(') op.push(s[i]);
		else if(s[i] == ')'){
			if(op.top() == '(') op.pop();
			else{
				while(op.size()){
					if(op.top() == '('){
						op.pop();
						break;
					}
					num.push(op.top()) , op.pop();
				}
			}
		}else if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
			if(!op.size() || op.top() == '('){
				op.push(s[i]);
			}else{
				if(isHigh(s[i], op.top())){
					op.push(s[i]);
				}else{
					while(true){
						if(!op.size() || op.top() == '('|| isHigh(s[i] , op.top())){
							op.push(s[i]);
							break;
						}
						num.push(op.top()) , op.pop();
					}
				}
			}
		}
	}

	while(op.size()){
		num.push(op.top()) , op.pop();
	}

	string res = "";
	while(num.size()){
		res = num.top() + res;
		num.pop();
	}
	return res;
}

int calc(string suffix){
	for(int i = 0 ; i < suffix.size() ; i++){
		int ans = 0;
		if(isdigit(suffix[i])){
			ca.push(suffix[i] - '0');
		}else{
			int a = ca.top(); ca.pop();
			int b = ca.top(); ca.pop();
			// cout << "#a ：" << a << "#b :" << b << "#op: " << suffix[i] << endl;
			switch(suffix[i]){
				case '+' : ans = (a + b); break;
				case '-' : ans = (b - a); break;
				case '*' : ans = (a * b); break;
				case '/' : ans = (b / a); break;
			}
			ca.push(ans);
		}
	}
	return ca.top();
}

int main(){
	cin >> str;
	string suffix = transfer(str);
	cout << calc(suffix) << endl;
	return 0;
}
