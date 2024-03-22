#include<bits/stdc++.h>
using namespace std;
int main()
{
	double xa,xb,xc,ya,yb,yc,a,b,c,hf_c,s;
	cin>>xa>>ya>>xb>>yb>>xc>>yc;
	a=sqrt(pow(fabs(xa-xb),2)+pow(fabs(ya-yb),2));
	b=sqrt(pow(fabs(xb-xc),2)+pow(fabs(yb-yc),2));
	c=sqrt(pow(fabs(xa-xc),2)+pow(fabs(ya-yc),2));
	hf_c=a+b+c;
	hf_c/=2;
	s=sqrt(hf_c*(hf_c-a)*(hf_c-b)*(hf_c-c));
	cout<<fixed<<setprecision(2)<<s;
}
