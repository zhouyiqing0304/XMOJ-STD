#include<bits/stdc++.h>
using namespace std;
int n,s[110];
void print(int dep)
{
    for (int i=1;i<dep;++i)
        printf("%d+",s[i]);
    printf("%d\n",s[dep]);
}
void dfs(int dep, int left)
{
    if (left == 0) {
        print(dep-1);
        return;
    }
    for (int i=s[dep-1]; i<=left; ++i)
        s[dep]=i, dfs(dep+1, left-i);
}
int main()
{
    scanf("%d",&n);
    s[0]=1;
    dfs(1, n);
    return 0;
}
