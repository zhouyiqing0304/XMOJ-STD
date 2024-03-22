#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;
	cin>>a>>b;
	if(a.substr(0,b.length())==b&&a.substr(a.length()-b.length(),b.length())==b) cout<<"YES";
	else cout<<"NO";
	return 0;
}
