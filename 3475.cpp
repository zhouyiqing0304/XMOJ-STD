#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("a.in","r",stdin);
	freopen("a.out","w",stdout);
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	sort(a,a+n);
	cout<<(int)abs(a[0]-a[n-1]);
	return 0;
}
