#include<bits/stdc++.h>
using namespace std;
int i,j,n,m,a,b,c,sum,ans;
int s[15]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int palindrome(int i,int j)
{
	int q,sum;
	q=(j%10)*1000+(j/10)*100+(i%10)*10+(i/10);
	sum=q*10000+i*100+j;
	return sum;
}
int main()
{
	freopen("date.in","r",stdin);
	freopen("date.out","w",stdout);
	cin>>n>>m;
	for(i=1;i<=12;i++) for(j=1;j<=s[i];j++)
		{
			c=palindrome(i,j);
			if(c>=n&&c<=m)ans++;
		}
	cout<<ans;
	return 0;
}
