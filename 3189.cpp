#include<bits/stdc++.h>
using namespace std;
int i,n,maxn=-1,sum,a[1010],b[1010];
int main(){
	cin>>n;
	for(i=0;i<n;i++)cin>>a[i];
	sort(a,a+n);
	for(i=0;i<n;i++)b[a[i]]++;
	for(i=0;i<n;i++)
		if(b[a[i]]>sum)
			sum=b[a[i]],maxn=a[i];
	cout<<maxn<<' '<<sum;
	return 0;
}
