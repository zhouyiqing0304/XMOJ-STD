#include<bits/stdc++.h>
using namespace std;
int a[1000010];
int main()
{
	int n,m,b,x,y;
	cin>>n>>b>>x>>y;
	for(int i=0;i<n;i++)cin>>a[i];
	m=a[x-1];
	for(int i=0;i<b;i++)cin>>a[i];
	if(m<a[b-y])cout<<"YES";
	else cout<<"NO";
}

