#include <bits/stdc++.h>
using namespace std;
const int N=110;
int n,root,v[N],lch[N],rch[N],ans[N];
void calc(int rt)
{
    if (!rt) return;
    calc(lch[rt]);
    calc(rch[rt]);
    ans[rt]=v[rt]+ans[lch[rt]]+ans[rch[rt]];
}
int main()
{
    scanf("%d%d",&n,&root);
    for (int i=1;i<=n;++i)
        scanf("%d%d%d",&v[i],&lch[i],&rch[i]);
    calc(root);
    for (int i=1;i<=n;++i)
        printf("%d\n",ans[i]);
    return 0;
}
