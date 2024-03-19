#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("pocky.in","r",stdin);
	freopen("pocky.out","w",stdout);
	int a,b;
	cin>>a>>b;
	if(a%(b*2)==0)
	cout<<(a/b/2)*b-b;
	else
	cout<<(a/b/2)*b;
	return 0;
}
