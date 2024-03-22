#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	double d,s=0;
	for(i=0;i<n;i++){
		cin>>d;
		s+=d;
	}
	cout<<fixed<<setprecision(4)<<s/n;
	return 0;
}
