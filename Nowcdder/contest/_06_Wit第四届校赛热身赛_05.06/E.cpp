#include <bits/stdc++.h>
using namespace std;
const int N=1e4+5;
int n,x,t[N],f[N];
int main(){
    scanf("%d%d",&n,&x);
    ++x;
    for (int i=1;i<=n;i++){
        scanf("%d",&t[i]);
        t[i]+=t[i-1]+1;
    }
    memset(f,0x3f,sizeof(f));
    f[0]=0;
    for(int i=1;i<=n;++i){
        for(int j=0;j<i;++j){
        	int m = t[i]-t[j]-x;
            f[i]=min(f[i],f[j]+ m * m);
        }
    }
    printf("%d",f[n]);
}