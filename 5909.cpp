#include <bits/stdc++.h>
using namespace std;
int n[10],v,a[1010],f[100010],ans;
int main(){
    for(int k=1;k<=4;++k)
        scanf("%d",&n[k]);
    for(int k=1;k<=4;++k){
        v=0; // 所有问题的总耗时
        for(int i=1;i<=n[k];++i){
            scanf("%d",&a[i]);
            v+=a[i];
        }
        memset(f,0,sizeof(f));
        // 小明负责一半, 背包尽量装满
        for(int i=1;i<=n[k];++i)
            for(int j=v/2;j>=a[i];--j)
                f[j]=max(f[j],f[j-a[i]]+a[i]);
        // f[v/2]表示小明能做的最多问题
        // 一定<=v/2, 佳佳做剩余部分, 计入耗时
        ans+=v-f[v/2];
    }
    printf("%d\n",ans);
    return 0;
}
