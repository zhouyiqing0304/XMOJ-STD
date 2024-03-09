#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long s=1;
	for(;n>0;n--)s*=n,s%=1000000007;
	cout<<s%1000000007;
}
