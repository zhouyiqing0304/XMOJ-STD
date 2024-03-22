#include <bits/stdc++.h>
using namespace std;
int dx[]={1,-1,0,0,0,0};
int dy[]={0,0,1,-1,0,0};
int dz[]={0,0,0,0,1,-1};
int n,r,c,sx,sy,sz,ex,ey,ez;
int a[50][50][50],ans[50][50][50];
char s[50];
struct P{
    int x,y,z;
};
void bfs(int x,int y,int z){
    queue<P> q;
    q.push((P){x,y,z});
    a[x][y][z]=0;
    while(!q.empty()){
        P p=q.front();
//        printf("(%d,%d,%d): %d\n",p.x,p.y,p.z,ans[p.x][p.y][p.z]);
        q.pop();
        if(p.x==ex&&p.y==ey&&p.z==ez) return;
        for(int i=0;i<6;++i){
            int xx=p.x+dx[i],yy=p.y+dy[i],zz=p.z+dz[i];
            if(a[xx][yy][zz]){
                ans[xx][yy][zz]=ans[p.x][p.y][p.z]+1;
                a[xx][yy][zz]=0;
                q.push((P){xx,yy,zz});
            }
        }
    }
}
int main(){
    scanf("%d%d%d",&n,&r,&c);
    for(int i=0;i<n;++i)
        for(int j=0;j<r;++j){
            scanf("%s",s);
            for(int k=0;k<c;++k){
                if(s[k]=='S') sx=i+1, sy=j+1, sz=k+1;
                if(s[k]=='E') ex=i+1, ey=j+1, ez=k+1;
                if(s[k]!='#') a[i+1][j+1][k+1]=1;
            }
        }
    bfs(sx,sy,sz);
    if(ans[ex][ey][ez])
        printf("%d\n",ans[ex][ey][ez]);
    else
        printf("Oh no!\n");
    return 0;
}
