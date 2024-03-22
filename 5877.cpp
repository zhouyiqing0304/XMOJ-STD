#include<bits/stdc++.h>
using namespace std;
int n,d,a[100010],ans,t;
int main()
{
	cin>>n>>d;
	for(int i=0;i<n;i++)cin>>a[i];
	sort(a,a+n);
	for(int i=1;i<n-1;i++)
		if(a[i+1]-a[t]<=d) a[i]=0,ans++;
		else t=i;
	cout<<ans;
	return 0;
}
