#include<bits/stdc++.h>
using namespace std;
	long long a,b,r,s,m;
	long long n,i,ii;
int main()
{
	cin>>n>>r;
	if(n%19!=0) {
		cout<<"NO";
		return 0;
	}
	else {
		for(;n>0;n/=10) {
			if(n%10==3) a++;
		}
	} 
		if(a==r) cout<<"YES";
		else cout<<"NO"; 
	return 0;
}
