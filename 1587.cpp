#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int a=1;a<=n;a++)
	for(int b=a;b<=n;b++)
	for(int c=b;c<=n;c++)
		if(a*a+b*b==c*c)
			printf("%d*%d + %d*%d = %d*%d\n",a,a,b,b,c,c);
	return 0;
}
