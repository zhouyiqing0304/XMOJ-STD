#include<bits/stdc++.h>
using namespace std;
int a,b;
int main()
{
	freopen("jump.in","r",stdin);
	freopen("jump.out","w",stdout);
	cin>>a>>b;
	if(b%a==0) cout<<b/a;
	else cout<<b/a+1;
	return 0;
}
