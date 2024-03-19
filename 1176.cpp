#include<bits/stdc++.h>
using namespace std;
int main()
{
	double n,s=1;
	cin>>n;
	for(double i=1;i<=n;i++){
		double j=1,k=1;
		for(;j<=i;j++)k*=j;
		s+=1/k;
	}
	cout<<fixed<<setprecision(10)<<s;
}
