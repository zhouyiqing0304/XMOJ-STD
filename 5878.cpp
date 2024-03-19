#include <bits/stdc++.h>
using namespace std;
const int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
struct P{
    int x,y;
};
// a数组自己兼做vis数组
// a[i][j]为0同时表示培养液与已访问两个含义
int n,m,ans,a[110][110];
char c;
void dfs(int x,int y){
    for(int i=0;i<4;++i){
        int xx=x+dx[i],yy=y+dy[i];
        if(a[xx][yy]){
            a[xx][yy]=0;
            dfs(xx,yy);
        }
    }
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;++i)
        for(int j=1;j<=m;++j){
            cin>>c;
            a[i][j]=c-'0';
        }
    for(int i=1;i<=n;++i)
        for(int j=1;j<=m;++j)
            if(a[i][j]){
                ++ans;
                dfs(i,j);
            }
    cout<<ans<<endl;
    return 0;
}
