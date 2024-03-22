#include<bits/stdc++.h>
using namespace std;
int n,a[200005];long long ans,j;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)cin>>a[i];
	sort(a,a+n);
	for(int i=1;i<n-1;i++){
		ans+=a[i]+a[i-1],a[i]+=a[i-1],j=i;
		while(a[j]>a[j+1]&&j+1<n){
			swap(a[j],a[j+1]);
			j++;
		}
	}
	ans+=a[n-1]+a[n-2];
	cout<<ans;
	return 0;
}
