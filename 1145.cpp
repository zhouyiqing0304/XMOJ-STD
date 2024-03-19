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
	cout<<(int)s<<' '<<fixed<<setprecision(5)<<s/n;
	return 0;
}
