#include<bits/stdc++.h>
using namespace std;
int a[512],n,i,m,j;
int main()
{
	cin>>n;
	for(i=0;i<n;i++){
		cin>>m;
		if(m%2==1)a[j]=m,j++;
	}
	sort(a,a+j);
	for(i=0;i<j-1;i++)cout<<a[i]<<',';
	cout<<a[j-1];
	return 0;
}
