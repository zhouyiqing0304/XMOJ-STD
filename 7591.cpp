#include<bits/stdc++.h>
using namespace std;
int main()
{
	double x,a,y,b,z,c,d;
	cin>>x>>a>>y>>b>>z>>c;
	d=(a+b+c)/(a/x+b/y+c/z);
	cout<<fixed<<setprecision(2)<<d;
}
