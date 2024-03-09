#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long long a,i,s=0;
	cin>>a;
	for(i=1;i<=a;i++){
		if(__gcd(a,i)==1) s++;
	}
	cout<<s<<endl;
	return 0;
}
