#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("tile.in","r",stdin);
	freopen("tile.out","w",stdout);
	int n,m,a;
	cin>>n>>m>>a;
	long long x,y;
	x=(n+a-1)/a;
	y=(m+a-1)/a;
	cout<<x*y;
	return 0;
}
//向上取整：(x+y-1)/y
