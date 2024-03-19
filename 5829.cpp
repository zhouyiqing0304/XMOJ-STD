#include <bits/stdc++.h>
using namespace std;
int n,m,ans=0,nv[1010],nt[1010],mv[1010],mt[1010];
int main(){
    cin>>n>>m;
    for(int i=1,t;i<=n;++i)
        cin>>nv[i]>>nt[i];
    for(int i=1,t;i<=m;++i)
        cin>>mv[i]>>mt[i];
    // f:上一次枚举谁领先, -1:未确定/0:第一个人/1第二个人
    int f=-1,s1,s2,i=1,j=1,t;
    // 从小到大依次枚举每一段结束时刻
    // s1,s2:每一段结束时两人各自位置
    while(i<=n&&j<=m){
        t=min(nt[i],mt[j]);
        s1+=nv[i]*t, s2+=mv[j]*t;
        if(s1!=s2&&(s1>s2)!=f){
            ++ans;
            f=s1>s2;
        }
        nt[i]-=t, mt[j]-=t;
        if(nt[i]==0) ++i;
        if(mt[j]==0) ++j;
    }
    if(ans) --ans;
    cout<<ans;
    return 0;
}
