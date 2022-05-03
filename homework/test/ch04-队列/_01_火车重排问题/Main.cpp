#include<bits/stdc++.h>
using namespace std;
queue<int> buf[3];
vector<int> ans;
int main(){
	string num;
	cin >> num;

	for(int i = 8 ; i >= 0 ; i--){
		buf[2].push(num[i] - '0');
	}

	int len = num.size() , now = 0 , target = 1;
	while(target <= 9){
		for(int k = 0 ; k < 2 ; k++){
			while(!buf[2].empty()){
				int t = buf[2].front();
				if(buf[2].front() == target){
					ans.push_back(t);
					buf[2].pop();
					target++;
				}else if(buf[k].empty() || buf[k].back() < t){
					buf[k].push(t);
					buf[2].pop();
				}else break;
			}
		}

		for(int k = 0 ; k < 3 ; k++){
			while(buf[k].front() == target){
				ans.push_back(target);
				buf[k].pop();
				target++;

			}
		}
	}

	for(int i = ans.size() - 1 ; i >= 0 ; i--){
		cout << ans[i] << " ";
	}


	return 0;
}