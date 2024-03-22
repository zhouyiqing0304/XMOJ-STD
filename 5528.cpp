#include<bits/stdc++.h>
using namespace std;
int n,t,a[100010],l,r,mid;
int main()
{
	cin>>n>>t;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=0;i<t;i++){
		cin>>l>>r;mid=(l+r)/2;
		for(;l<r;mid=(l+r)/2)
            if(a[mid]>a[mid+1]) r=mid;
            else l=mid+1;
		cout<<r<<endl;
	}
	return 0;
}
