#include<bits/stdc++.h>
using namespace std;
void ct(long long j){
	for(long long a=2;a<=j;a++)
	for(long long b=a;b<=j;b++)
	for(long long c=b;c<=j;c++)
	{
		if(a*a*a+b*b*b+c*c*c==j*j*j)cout<<"Cube = "<<j<<", Triple = ("<<a<<','<<b<<','<<c<<')'<<endl;
	}
	return;
}
int main()
{
	long long n;
	cin>>n;
	for(long long i=0;i<=n;i++){
  		ct(i);
	}
	return 0;
}
