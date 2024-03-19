#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	if(s[0]!='Y'&&s[0]!='y') {
		cout<<"NO";
		return 0;
	}
	if(s[1]!='E'&&s[1]!='e') {
		cout<<"NO";
		return 0;
	}
	if(s[2]!='S'&&s[2]!='s') {
		cout<<"NO";
		return 0;
	}
	cout<<"YES";
}
