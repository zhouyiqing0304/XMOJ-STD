#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[128][128],n,i,j,m,k;
	cin>>k;
	for(i=0;i<k;i++) for(j=0;j<k;j++) cin>>a[i][j];
	cin>>n>>m;
	cout<<a[m-1][n-1];
	return 0;
}
