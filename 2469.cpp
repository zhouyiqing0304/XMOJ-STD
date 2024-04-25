#include<bits/stdc++.h>
using namespace std;
const int N=110;
int n,x,y,a[N][N],q[N],h,t,vis[N],ans[N];
int main()
{
	cin>>n>>x>>y;
	for (int i=1;i<=n;++i)
		for (int j=1;j<=n;++j) scanf("%d",&a[i][j]);
	memset(ans,-1,sizeof(ans));
	vis[x]=1;
	q[t++]=x;
	while (h<t) {
		int u=q[h++];
		if (u==y) break;
		for (int i=1;i<=n;++i)
			if (a[u][i]&&!vis[i]) {
				q[t++]=i; ans[i]=ans[u]+1;
				vis[i]=1;
			}
	}
	printf("%d\n",ans[y]);
	return 0;
}
