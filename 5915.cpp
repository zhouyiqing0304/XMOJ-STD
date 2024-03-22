#include <bits/stdc++.h>
using namespace std;
int v,w,n,a[60],b[60],c[60];
int f[410][410];
int main(){
    scanf("%d%d%d",&v,&w,&n);
    for(int i=1;i<=n;++i)
        scanf("%d%d%d",&a[i],&b[i],&c[i]);
    for(int i=1;i<=n;++i)
        for(int j=v;j>=a[i];--j)
            for(int k=w;k>=b[i];--k)
                f[j][k]=max(f[j][k],f[j-a[i]][k-b[i]]+c[i]);
    printf("%d\n",f[v][w]);
    return 0;
}

