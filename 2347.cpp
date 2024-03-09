#include<bits/stdc++.h>
using namespace std;
long long f(long long n){
	long long a=1,b=1,c=1;
	n-=2;
	while(n>0){
		if(n==1){
			c=a+b;
			a=c;
		c%=1000000007;
			n-=2;
			break;
		}
		c=a+b;
		c%=1000000007;
		a=c;
		c=a+b;
		c%=1000000007;
		b=c;
		n-=2;
		c%=1000000007;
	}
	cout<<c%1000000007<<endl;
}
int main()
{
	int n,a;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		f(a);
	}
}

