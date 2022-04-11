#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define pb push_back
#define mm memset
#define LL long long
#define FAST ios::sync_with_stdio(false) , cin.tie(0) , cout.tie(0)
#define rep(i , a , b) for(int i=a;i<=b;i++)
#define per(i , a , b) for(int i=a;i>=b;i--)
const int INF = 0x3f3f3f3f;
const int MINF = 0x3f;
// cin 优化
ios::sync_with_stdio(false);
cin.tle(0);

// 快读
template <typename T> 
inline void read(T &s) { 
	s = 0; 
	T w = 1, ch = getchar();  
	while (!isdigit(ch)) { if (ch == '-') w = -1; ch = getchar(); } 
	while (isdigit(ch)) { s = (s << 1) + (s << 3) + (ch ^ 48); ch = getchar(); } 
	s *= w; 
} 

// 快写
template <typename T> 
inline void write(T s) {
	T w = 0, c[15]; 
	if (s < 0) putchar('-'), s = -s; 
	while(s) c[++w] = (s % 10) + 48, s /= 10;
	while(w) putchar(c[w--]); 
}
