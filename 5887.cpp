#include <bits/stdc++.h>
using namespace std;
const int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
// a: 兼做vis数组
int n,m,a[40][40],sx,sy,ans;
char s[40];
void dfs(int x,int y){
    ++ans;
    for(int i=0;i<4;++i){
        int xx=x+dx[i],yy=y+dy[i];
        if(a[xx][yy]){
            a[xx][yy]=0;
            dfs(xx,yy);
        }
    }
}
int main(){
    scanf("%d%d\n",&n,&m);
    for(int i=0;i<n;++i){
        scanf("%s",s);
        for(int j=0;j<m;++j){
            if(s[j]=='@') sx=i+1, sy=j+1;
            if(s[j]!='#') a[i+1][j+1]=1;
            else a[i+1][j+1]=0;
        }
    }
    a[sx][sy]=0;
    dfs(sx,sy);
    printf("%d\n",ans);
    return 0;
}
