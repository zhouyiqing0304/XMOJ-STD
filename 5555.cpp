#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{
	cin>>s;
	for(int i=1;i<s.size();i++){
		if((s[i]==')'&&(s[i-1]=='['||s[i-1]=='{'))||(s[i]==']'&&(s[i-1]=='{'||s[i-1]=='('))||(s[i]=='}'&&(s[i-1]=='['||s[i-1]=='('))){
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}
