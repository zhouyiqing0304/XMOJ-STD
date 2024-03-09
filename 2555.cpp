#include<bits/stdc++.h>
using namespace std;
int n,m,a[1024];
int main()
{
	cin>>n;
	if(n==1){
		cin>>n;
		if(n==15) cout<<"DOWN";
		else if(n==0) cout<<"UP";
		else cout<<-1;
		return 0;
	}
	for(int i=0;i<n;i++) cin>>a[i];
	if(a[n-1]>a[n-2]){
		if(a[n-1]==15) cout<<"DOWN";
		else cout<<"UP";
	}
	if(a[n-1]<a[n-2]){
		if(a[n-1]==0) cout<<"UP";
		else cout<<"DOWN";
	}
	return 0;
}
