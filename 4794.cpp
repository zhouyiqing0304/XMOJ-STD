#include <bits/stdc++.h>
using namespace std;
// S: space, P: plus, M: minus
const int S=0,P=1,M=2;
const int F[3]={0,1,-1};
int n,t=1,b[20],ans,cnt;
void print(int v){
    for(int j=1;j<n;++j){
        printf("%d",j);
        if(b[j]==P) printf("+");
        if(b[j]==M) printf("-");
    }
    printf("%d=%d\n",n,v);
}
int main(){
    freopen("zerosum.in","r",stdin);
    freopen("zerosum.out","w",stdout);
    scanf("%d",&n);
    // t表示共有3^(n-1)种可能的组合
    for(int i=1;i<n;++i) t*=3;
    // 从0到t-1的每一个数,按3进制拆分后各个数位放在b中,表示每一种组合
    for(int i=0;i<t;++i){
        memset(b,0,sizeof(b));
        int j=1,x=i;
        while(x){
            b[j++]=x%3;
            x/=3;
        }
        int k=1,v=0,f=1,maxn=0;
        for(int j=2;j<=n;++j){
            if(b[j-1]){
                v+=k*f;
                k=0;
                f=F[b[j-1]];
            }
            k=k*10+j;
            maxn=max(maxn,k);
        }
        v+=k*f;
        if(v==0){
//            print(v);
            ++cnt;
            ans=max(maxn,ans);
        }
    }
    printf("%d %d",cnt,ans);
    return 0;
}
