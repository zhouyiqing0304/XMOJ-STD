#include<bits/stdc++.h>
using namespace std;
const int N=110;
int n,m,p[N][N],ans,dx[4]={0,0,1,-1},dy[4]={1,-1,0,0};
int dfs(int x,int y)
{
    int a=1;
    p[x][y]=0;
    for (int i=0;i<4;++i)
        if (p[x+dx[i]][y+dy[i]])
            a+=dfs(x+dx[i],y+dy[i]);
    return a;
}
int main()
{
    scanf("%d%d",&n,&m);
    for (int i=1;i<=n;++i)
        for (int j=1;j<=m;++j)
            scanf("%d",&p[i][j]);
    for (int i=1;i<=n;++i)
        for (int j=1;j<=m;++j)
            if (p[i][j])
                ans=max(ans,dfs(i,j));
    printf("%d\n",ans);
    return 0;
}
