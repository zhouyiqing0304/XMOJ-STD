#include <bits/stdc++.h>
using namespace std;
int n,k,t[100010],c[100010],ans;
int main(){
    scanf("%d%d%d",&n,&k,&t[0]);
    for(int i=1;i<n;++i){
        scanf("%d",&t[i]);
        c[i]=t[i]-t[i-1]-1;
    }
    sort(c+1,c+n);
    ans=n; // 每位客人运行一分钟
    for(int i=1;i<=n-k;++i) // 缺几次开关额度就加几个间隔
        ans+=c[i];
    printf("%d\n",ans);
    return 0;
}
