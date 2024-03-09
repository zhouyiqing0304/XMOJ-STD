#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i,j,a,b,x=0-0xFFFF;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a>>b;
		if(a<=x) for(;a<=x;) a+=b;
		x=a;
	}
	cout<<x;
	return 0;
}
