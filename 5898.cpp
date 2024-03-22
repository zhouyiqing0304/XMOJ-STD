#include <bits/stdc++.h>
using namespace std;
const int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0},FULL=6;
// vis[x][y][k]: 在(x,y)电量为k时最少的步数
int n,m,vis[20][20][10],ans=INT_MAX,sx,sy;
char s[20][20];
void dfs(int x,int y,int step,int egy){
    if(s[x][y]=='E'){
        ans=step;
        return;
    }
    if(s[x][y]=='@') egy=FULL;
    if(egy<=1||step>=ans||step>=vis[x][y][egy]) return;
    vis[x][y][egy]=step;
    for(int i=0;i<4;++i){
        int xx=x+dx[i],yy=y+dy[i];
        if(xx<0||n<=xx||yy<0||m<=yy) continue;
        if(s[xx][yy]!='#')
            dfs(xx,yy,step+1,egy-1);
    }
}
int main(){
    cin>>n>>m;
    for(int i=0;i<n;++i){
        cin>>s[i];
        for(int j=0;j<m;++j)
            if(s[i][j]=='S') sx=i,sy=j;
    }
//    printf("sx=%d sy=%d\n",sx,sy);
    memset(vis,0x3f,sizeof(vis));
    dfs(sx,sy,0,FULL);
    if(ans==INT_MAX) printf("-1\n");
    else printf("%d\n",ans);
    return 0;
}
