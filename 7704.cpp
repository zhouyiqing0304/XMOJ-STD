#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,q;
	cin>>a>>b>>c>>q;
	if(2*a+5*b+3*c<=q)cout<<"Yes"<<endl<<q-(2*a+5*b+3*c);
	else cout<<"No"<<endl<<2*a+5*b+3*c-q;
}
