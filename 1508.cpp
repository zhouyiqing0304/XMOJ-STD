#include<bits/stdc++.h>
using namespace std;
int f[10010],c[110],w[110],m[110],v,n;
void completePack(int f[],int c,int w) {
    for(int j=c; j<=v; j++)
        f[j]=max(f[j],f[j-c]+w);
}
void zeroOnePack(int f[],int c,int w) {
    for(int j=v; j>=c; --j)
        f[j]=max(f[j],f[j-c]+w);
}
void multiPack(int f[],int c,int w,int m) {
    if(c*m>=v) {
        completePack(f,c,w);
        return;
    }
    int k=1;
    while(k<m) {
        zeroOnePack(f,k*c,k*w);
        m-=k;
        k*=2;
    }
    zeroOnePack(f,m*c,m*w);
}
  
int main() {
    scanf("%d%d",&v,&n);
    for(int i=1; i<=n; i++) {
        scanf("%d%d%d",&m[i],&c[i],&w[i]);
        m[i]=min(m[i],v/c[i]);
    }
    for(int i=1; i<=n; i++) {
        multiPack(f,c[i],w[i],m[i]);
    }
    printf("%d\n",f[v]);
    return 0;
}
