#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,a;
	double b,c,d;
	cin>>n>>a;
	c=a/pow(10,n);
	for(long long i=1;i<=23380;i++){
		int p=(i+c)*(i+c)+0.5;
		double q;int qq;
		qq=q=sqrt(p);
		double x=q-qq;
		x*=pow(10,n);
		int aa=x;
		if(aa==a){
			cout<<p;
			return 0;
		}
	}
}
