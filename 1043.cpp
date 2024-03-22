#include<bits/stdc++.h>
using namespace std;
int a,b,c[111][111];
int main()
{
	freopen("mine.in","r",stdin);
	freopen("mine.out","w",stdout);
	cin>>a>>b;
	char ch;
	for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			cin>>ch;
			if(ch=='*')c[i][j]=1;
		}
	}
	for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			if(c[i][j]==0)cout<<c[i+1][j]+c[i][j+1]+c[i+1][j+1]+c[i+1][j-1]+c[i-1][j+1]+c[i-1][j]+c[i][j-1]+c[i-1][j-1];
			else cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
