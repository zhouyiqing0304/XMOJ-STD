#include<bits/stdc++.h>
using namespace std;
int l,n,x;
int lmax,lmin,rmax,rmin;
int main()
{
	cin>>l>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		lmin=max(lmin,min(x,l+1-x));
		rmin=max(rmin,min(x,l+1-x));
		lmax=max(lmax,max(x,l+1-x));
		rmax=max(rmax,max(x,l+1-x));
	}
	cout<<max(lmin,rmin)<<' '<<max(lmax,rmax);
	return 0;
}
