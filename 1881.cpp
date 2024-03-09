#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("hotel.in","r",stdin);//文件名、模式、文件对象
	freopen("hotel.out","w",stdout);
	int N,K,X,Y,sum=0;
	cin>>N>>K>>X>>Y;
	sum+=N*X;
	if(N>K) sum+=(Y-X)*(N-K);
	cout<<sum;
	return 0;
}
