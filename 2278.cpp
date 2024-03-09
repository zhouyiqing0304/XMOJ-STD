#include <bits/stdc++.h>
using namespace std;
const int N=110;
int n,root,v[N],lch[N],rch[N],ans[N];
void calc(int rt,int dep)
{
    ans[rt]=dep;
    if (lch[rt])
        calc(lch[rt],dep+1);
    if (rch[rt])
        calc(rch[rt],dep+1);
}
int main()
{
    scanf("%d%d",&n,&root);
    for (int i=1;i<=n;++i)
        scanf("%d%d",&lch[i],&rch[i]);
    calc(root,1);
    for (int i=1;i<=n;++i)
        printf("%d\n",ans[i]);
    return 0;
}
