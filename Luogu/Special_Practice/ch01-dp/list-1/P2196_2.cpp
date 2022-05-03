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

const int N = 24;
int a[N] , res[N], g[N][N] , path[N];
bool st[N];
int n , Max , cnt;

// 检查某个点是否还有联通的点
bool check(int now) {
    rep(i , now + 1, n)
        if (g[now][i]) return true;
    return false;
}

// dfs(当前到的点 , 步数  , 炸弹数量)
void dfs(int now , int step , int sum) {
    if (!check(now)) {
        if (Max < sum) {
            cnt = step;
            Max = sum;
            rep(i , 1 , step) res[i] = path[i];
        }
        return;
    }
    rep(i , now , n) {
        // 如果能走 并且 没有走过
        if (g[now][i] && !st[i]) {
            st[i] = true;
            // 记录路径值
            path[step + 1] = i;
            dfs(i , step + 1 , sum + a[i]);
            st[i] = false;
        }
    }

}

int main() {
    FAST;
    cin >> n;
    rep(i , 1 , n) {
        cin >> a[i];
    }

    int ans = 0;
    rep(i , 1 , n - 1)
        rep(j , i + 1 , n) cin >> g[i][j];

    // 枚举每一个起点
    rep(i , 1 , n){
        st[i] = true;
        path[1] = i;
        dfs(i , 1 , a[i]);
        st[i] = false;
    }

    rep(i , 1 , cnt) cout << res[i] << " ";
    cout << endl;
    cout << Max << endl;

    return 0;
}