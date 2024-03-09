#include<bits/stdc++.h>
using namespace std;
int n,m,sum,i,a[111];
int main()
{
	int aaa;
	cin>>aaa;
	for(int iii=0;iii<aaa;iii++){
		cin>>n,sum=0;
		for(int i=0;i<n;i++) cin>>a[i],sum+=a[i];
		cout<<(int)ceil((double)sum/n)<<endl;
	}
	return 0;
}
