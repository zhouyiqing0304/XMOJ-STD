#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	char c,s;
	cin>>c>>s;
	replace(str.begin(),str.end(),c,s);
	cout<<str;
 } 
