#include <bits/stdc++.h>
using namespace std;

int n,a[100011],b[100011],k,maximum,i;

int main(){
	cin>>n;
	for(i=1;i<=n;i++) cin>>a[i];
	for(i=1;i<=n;i++) if(a[i]==a[i-1]) b[k]++;else b[++k]=1;
	for(i=2;i<=k;i++) maximum=max(maximum,min(b[i],b[i-1]));
	cout<<maximum*2;
	return 0;
}
