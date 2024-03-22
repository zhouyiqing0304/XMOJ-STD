#include<bits/stdc++.h>
using namespace std;
long long n,m,i,a[100010],s;
int main()
{
	freopen("song.in","r",stdin);
	freopen("song.out","w",stdout);
	cin>>n>>m;
	for(i=0;i<n;i++){
		cin>>a[i];
		s+=a[i];
	}
	m%=s;
	for(i=0;a[i]<m;i++)m-=a[i];
	cout<<i+1<<' '<<m;
	return 0;
}
