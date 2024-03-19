#include<bits/stdc++.h>
using namespace std;
	int n,m,s1,s5,s0;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>m;
		if(m==1)s1++;
		if(m==5)s5++;
		if(m==10)s0++;
	}
	cout<<s1<<endl<<s5<<endl<<s0;
}
