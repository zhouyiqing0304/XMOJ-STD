#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y,s[127][127],m,n,i,j;
	memset(s,0,sizeof(s));
	cin>>x>>y;
	for(i=0;i<x;i++) for(j=0;j<y;j++){
		cin>>m;
		s[i][j]+=m;
	}
	for(i=0;i<x;i++) for(j=0;j<y;j++){
		cin>>m;
		s[i][j]+=m;
	}
	for(i=0;i<x;i++,cout<<endl) for(j=0;j<y;j++){
		cout<<s[i][j]<<' ';
	}
	return 0;
}
