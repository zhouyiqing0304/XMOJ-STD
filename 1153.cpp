#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i,j,s=0;
	cin>>n>>m;
	for(i=0;i<n;i++){
		cin>>j;
		if(j==m) s++;
	}
	cout<<s;
	return 0;
}
