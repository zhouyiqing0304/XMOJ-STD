#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("change.in","r",stdin);
	freopen("change.out","w",stdout);
	int x,y,z,sum=0,s=0;
	cin>>x>>y>>z;
	sum=x*100+y*25+z;
	sum%=1000;
	s+=sum/100,sum%=100;
	s+=sum/25,sum%=25;
	s+=sum;cout<<s;
	return 0;
}
