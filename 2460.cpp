#include<bits/stdc++.h>
using namespace std;
int n,r,a[20],vis[20];
void print()
{
    for (int i=1;i<=r;++i) {
        printf("%d",a[i]);
        if (i<r) putchar(' ');
    }
    putchar('\n');
}
void dfs(int dep)
{
    if (dep==r+1) { print(); return; }
    for (int i=1;i<=n;++i)
        if (!vis[i]) {
            a[dep]=i;
            vis[i]=1;
            dfs(dep+1);
            vis[i]=0;
        }
}
int main()
{
    scanf("%d%d",&n,&r);
    dfs(1);
    return 0;
}
