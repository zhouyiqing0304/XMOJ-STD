#include<bits/stdc++.h>
using namespace std;
long long s=1;
long long F(long long n){
	if(n==1){
		return 1;
	}
	s*=n,s%=1007;
	return F(n-1);
}
int main()
{
	int n;
	cin>>n;
	F(n);
	cout<<s%1007;
}
