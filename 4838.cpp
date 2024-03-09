#include<bits/stdc++.h>
using namespace std;
int n,m[100010],i,j,k;
int main()
{
	cin>>n;
	for(i=0;i<n;i++) cin>>m[i];
	cin>>k;
	for(i=0;i<n;i++) if(m[i]==k) break;
	m[i]=0;
	for(;;i--) if(m[i]!=0) break;else if(i==0){--i;break;}
	++i;
	if(i<0)i=0;
	m[i]=k;
	for(i=0;i<n;i++){
		cout<<m[i]<<' ';
	}
	return 0;
}

