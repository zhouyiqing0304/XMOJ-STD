#include<bits/stdc++.h>
using namespace std;
int a[128][128];
int main()
{
	int w,h,n,x,y,A;
	cin>>w>>h>>n;
	for(int iii=0;iii<n;iii++){
		cin>>x>>y>>A;
		if(A==1){
			for(int i=1;i<=x;i++)
				for(int j=1;j<=h;j++)
					a[i][j]=1;
		}
		if(A==2){
			for(int i=x+1;i<=w;i++)
				for(int j=1;j<=h;j++)
					a[i][j]=1;
		}
		if(A==3){
			for(int i=1;i<=h;i++)
				for(int j=1;j<=y;j++)
					a[i][j]=1;
		}
		if(A==4){
			for(int i=1;i<=w;i++)
				for(int j=y+1;j<=h;j++)
					a[i][j]=1;
		}
	}
	int sum=0;
	for(int i=1;i<=w;i++)
		for(int j=1;j<=h;j++)
			if(a[i][j]==0) sum++;
	cout<<sum;	return 0;
}
