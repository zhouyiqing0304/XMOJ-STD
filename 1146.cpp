#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,m,k=-144;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>m;
		if(m>k) k=m;
	}
	cout<<k;
	return 0;
}
