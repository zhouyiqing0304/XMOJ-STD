#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[6][6],n,i,j,m;
	for(i=0;i<5;i++) for(j=0;j<5;j++) cin>>a[i][j];
	cin>>n>>m;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i+1==n) cout<<a[m-1][j];
			else if(i+1==m) cout<<a[n-1][j];
			else cout<<a[i][j];
			cout<<' ';
		}
		cout<<endl;
	}
}
