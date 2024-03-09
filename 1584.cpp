#include<bits/stdc++.h>
using namespace std;
int n,a[128],sum;
int main()
{
	for(int i=0;i<15;i++){
		cin>>a[i];
		if(a[i]==0) break;
		n++;
	}
	sort(a,a+n);
	for(int i=0;i<n;i++){
		if(binary_search(a,a+n,a[i]*2))sum++;
	}
	cout<<sum;
	return 0;
}
