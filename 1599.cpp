#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long x=0,y=0,z=0,n,min=10000000,m;
	cin>>n;
	for(x=1;x<n;x++)
		for(y=1;y<n;y++){
			z=n/x/y;
			if(n%x||n%y||n%(x*y)) continue;
			if(x*y*z==n){
				m=x*y*2+y*z*2+z*x*2;
				if(m<min){
					min=m;
				}
			}
		}
	cout<<min;
	return 0;
}
