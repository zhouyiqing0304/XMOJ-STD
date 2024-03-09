#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,n,m[2048],i,j,k,sum=0;
	cin>>a>>b;
	for(i=0;i<a;i++)
		cin>>m[i];
	for(i=1;i<a;i++){
		if(m[i]<=m[i-1]){
			sum+=((m[i-1]-m[i])/b+1);
			m[i]+=((m[i-1]-m[i])/b+1)*b;
		}
	}
	cout<<sum<<endl;
	return 0;
}
