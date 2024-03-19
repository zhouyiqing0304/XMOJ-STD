#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long long a,b;
	cin>>a>>b;
	cout<<(unsigned long long)a*b/__gcd(a,b);
	return 0;
}
