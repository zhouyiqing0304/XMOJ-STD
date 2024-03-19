#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,m,o,s=0;
	cin>>n>>m;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++){
			cin>>o;
			if(i==0||j==0||j==m-1||i==n-1) s+=o;
			
		}
	cout<<s<<endl;
	return 0;
}
