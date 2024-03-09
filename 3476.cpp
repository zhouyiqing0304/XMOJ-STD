#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("b.in","r",stdin) ;
	freopen("b.out","w",stdout) ;
	long long a,b,c;
	cin>>a>>b>>c;
	cout<<max(max(b,c),a)-min(a,min(b,c));
	return 0;
}
