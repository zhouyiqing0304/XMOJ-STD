#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y,X,Y,n,m,s=0,i,j;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>x>>y>>X>>Y;
		s+=abs(X-x+1)*abs(Y-y+1);
	}
	cout<<s<<endl;
	return 0;
}
