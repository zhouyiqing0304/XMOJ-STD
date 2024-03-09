#include<bits/stdc++.h>
using namespace std;
int n,a[1010],maxn=0-0x3f3f3f3f,m,o;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++) cin>>m,a[m]++;
	for(int i=1000;i>=0;i--)if(a[i]>=maxn)maxn=a[i],o=i;
	cout<<o;
	return 0;
}
