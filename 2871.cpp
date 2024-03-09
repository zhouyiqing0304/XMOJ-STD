#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("mean.in","r",stdin);
	freopen("mean.out","w",stdout);
	int n,m,i,j[20];
	memset(j,0x7FFFFFFF,sizeof(j));
	cin>>n>>m;
	for(i=0;i<n;i++) cin>>j[i];
	sort(j,j+n);
	cout<<j[n-1]-j[0]<<endl;
	return 0;
}
