#include<bits/stdc++.h>
using namespace std;
int main()
{
	long double a[128][128],b[128][128],n,m,k,s=0;long i,j;
	cin>>n>>m;
	for(i=0;i<n;i++) for(j=0;j<m;j++) cin>>a[i][j];
	for(i=0;i<n;i++) for(j=0;j<m;j++) cin>>b[i][j];
	for(i=0;i<n;i++) for(j=0;j<m;j++) s+=fabs(a[i][j]-b[i][j])/255*100;
	cout<<fixed<<setprecision(2)<<s/(n*m)<<'%';
	return 0;
}
