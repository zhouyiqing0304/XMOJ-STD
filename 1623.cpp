#include<bits/stdc++.h>
using namespace std;
int a[50][50];
struct K{
	int x;
	int y;
};
int main()
{
	K k;
	int n,m;
	cin>>n;
	m=n/2;
	a[m][0]=1;
	k.x=m,k.y=0;
	for(int i=2;i<=n*n;i++){
		if(k.y==0&&k.x!=n-1){
			a[k.x+1][n-1]=i;
			k.x=k.x+1,k.y=n-1;
			continue;
		}
		if(k.x==n-1&&k.y!=0){
			a[0][k.y-1]=i;
			k.x=0,k.y=k.y-1;
			continue;
		}
		if(k.x==n-1&&k.y==0){
			a[k.x][k.y+1]=i;
			k.x=k.x,k.y=k.y+1;
			continue;
		}
		if(k.x!=n-1&&k.y!=0){
			if(a[k.x+1][k.y-1]==0){
				a[k.x+1][k.y-1]=i;
				k.x=k.x+1,k.y=k.y-1;
			}
			else {
				a[k.x][k.y+1]=i;
				k.x=k.x,k.y=k.y+1;
			}
			continue;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[j][i]<<' ';
		}
		cout<<endl;
	}
	return 0;
}
