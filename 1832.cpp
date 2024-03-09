#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long sum=1;
	for(;n>0;n--)sum*=2;
	cout<<--sum;
}
