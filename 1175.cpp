#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		int j=1,k=1;
		for(;j<=i;j++)k*=j;
		s+=k;
	}
	cout<<s;
}
