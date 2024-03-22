#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,m,i,l=-9223372036854775807,s=9223372036854775807;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>m;
		if(m>l) l=m;
		if(m<s) s=m;
	}
	cout<<l-s;
	return 0;
}
