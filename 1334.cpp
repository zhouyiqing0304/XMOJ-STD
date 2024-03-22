#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tb[128][128],x,y,n,m,i,j,k,ans=0;
	cin>>n>>m;
	memset(tb,0,sizeof(tb));
	for(i=1;i<=n;i++) for(j=1;j<=m;j++) cin>>tb[i][j];
	for(i=1;i<=n;i++) for(j=1;j<=m;j++) {
		if(tb[i][j]==1){
			if(tb[i+1][j]==0)	tb[i+1][j]=-1;
			if(tb[i][j+1]==0)	tb[i][j+1]=-1;
			if(tb[i+1][j+1]==0)	tb[i+1][j+1]=-1;
			if(tb[i+1][j-1]==0)	tb[i+1][j-1]=-1;
			if(tb[i-1][j]==0)	tb[i-1][j]=-1;
			if(tb[i][j-1]==0)	tb[i][j-1]=-1;
			if(tb[i-1][j-1]==0)	tb[i-1][j-1]=-1;
			if(tb[i-1][j+1]==0)	tb[i-1][j+1]=-1;
		}
	}
	for(i=1;i<=n;i++) for(j=1;j<=m;j++) if(tb[i][j]==-1) ans++;
	cout<<ans;
	return 0;
}
