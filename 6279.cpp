#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("pow.in","r",stdin);
	freopen("pow.out","w",stdout);
	int n,m;
	cin>>n>>m;
	long long sum=1;
	for(int i=0;i<m;i++)
	{
		sum=sum*n;
		if(sum>1000000000)
		{
			cout<<"-1";
			return 0;
		}
	}
	cout<<sum;
	return 0;
}
