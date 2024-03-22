#include<iostream>
using namespace std;
int main()
{
	int a,b,c;cin>>a>>b>>c;
	if(a>c-b&&b>a-c&&c>a-b&&a<b+c&&b<a+c&&c<a+b) cout<<"yes";
	else cout<<"no";
}
