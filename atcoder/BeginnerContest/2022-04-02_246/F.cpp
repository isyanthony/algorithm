#include<bits/stdc++.h>
# define int long long
using namespace std;
const int MOD = 998244353;
const int N = 20;
string s[N];
int ch[27];

int Pow(int x , int n) {
	int ans = 1;
	while(n) {
		if(n & 1) ans = ans * x % MOD;
		n >>= 1;
		x = x * x % MOD;
	}
	return ans % MOD;
}


signed main() {
	int n , l;
	cin >> n >> l;
	for(int i = 0 ; i < n ; i++) cin >> s[i];

	int ans = 0;
	// 枚举字符串的状态
	for(int mask = 1 ; mask < (1 << n) ; mask++){
		// 初始化单个字符数量
		memset(ch , 0 , sizeof ch);
		// 记录有多少个集合杯选中
		int cnt = 0;
		// 遍历集合
		for(int i = 0 ; i < n ; i++){
			// 判断此集合是否被选中
			if(mask >> i & 1){
				cnt++;
				//将字符读入
				for(auto c : s[i]) ch[c - 'a']++;
			}
		}
		int res = 0;
		for(int i = 0 ; i < 26 ; i++)
			// 判断选中集合中都存在的字符
			if(ch[i] == cnt) res++;

		int pow = Pow(res , l);
		// 通过容斥原理进行计算
		if(cnt & 1) (ans += pow) %= MOD;
		else (ans -= pow) %= MOD , ans = (ans + MOD) % MOD;
	}

	cout << ans << endl;	
	return 0;
}