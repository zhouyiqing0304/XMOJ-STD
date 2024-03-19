#include <bits/stdc++.h>
using namespace std;
int main()
{
	double a,b,c;
	cin>>a;
	b=a/3.0+50;
	c=a/1.2;
	if(b<c) cout<<"Bike"<<endl;
	else if(b>c) cout<<"Walk"<<endl;
	else cout<<"All"<<endl;
	return 0;
}
