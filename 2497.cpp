#include<bits/stdc++.h>
using namespace std;
int n,m,a,b;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		(a>b)?m++:(a<b)?m--:m=m; 
	}
	if(m>0)cout<<1;
	else if(m==0) cout<<"haha";
	else cout<<2;
}
