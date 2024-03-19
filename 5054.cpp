#include<bits/stdc++.h>
using namespace std;
long long i,n,a[200011],c[200011],ans=0,j;
bool f;
int main()
{
	cin>>n;
	for(i=1;i<=n;i++) cin>>a[i];
	for(i=n-1;i>0;i--){
		f=true;
		for(j=i;j<n&&j-i<3&&a[j]==f;j++) {
			if(c[j]) {
				c[i]+=c[j];
				break;
			}
			c[i]++;
			f=!f;
		}
		ans+=c[i];
	}
	cout<<ans;
	return 0;
}
