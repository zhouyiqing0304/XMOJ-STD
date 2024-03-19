#include<bits/stdc++.h>
using namespace std;
int n;
void fbnq(int i,int j,int k){
	j+=i;
	i+=j;
	if(k==n-3) {
		cout<<j;
		return;
	}
	else if(k==n-4){
		cout<<i;
		return;
	}
	fbnq(i,j,k+2);
}
int main()
{
	int m;
	cin>>m;
	for(int l=0;l<m;l++)
	{
		cin>>n;
		if(n>3) fbnq(1,1,0);
		else if(n==3) cout<<2;
		else cout<<1;
		cout<<endl;
	}
	return 0;
}
