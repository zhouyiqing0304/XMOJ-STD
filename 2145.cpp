#include<bits/stdc++.h>
using namespace std;
const int B=0,W=1;
int n,m,a[30][30],cnt[2]={2,2},cur;
int dx[8]={0,1,1,1,0,-1,-1,-1};
int dy[8]={1,1,0,-1,-1,-1,0,1};
bool check(int x,int y,int dx,int dy,int c){
	int aa=0,bb=0,xx=x,yy=y;
	while(1){
		x+=dx,y+=dy;
		if(x<1||x>n||y<1||y>n) break;
		if(a[x][y]==-1) break;
		if(a[x][y]==c){
			bb=1;break;
		}
		aa++;
	}
	if(!bb||!aa) return false;
	x=xx,y=yy;
	while(1){
		x+=dx;y+=dy;
		if(a[x][y]==c) break;
		a[x][y]=c;
	}
	cnt[c]+=aa,cnt[1-c]-=aa;
	return true;
}
int main()
{
	cin>>n>>m;
	memset(a,-1,sizeof(a));
	a[n/2][n/2]=a[n/2+1][n/2+1]=B;
	a[n/2][n/2+1]=a[n/2+1][n/2]=W;
	for(int i=1;i<=m;i++){
		int x,y,good=0;
		cin>>x>>y;
		if(a[x][y]==-1)
			for(int j=0;j<8;j++)
				good|=check(x,y,dx[j],dy[j],cur);
		if(good){
			a[x][y]=cur;
			cnt[cur]++;
			cur=1-cur;
		}
	}
	cout<<cnt[B]<<' '<<cnt[W];
	return 0;
}
