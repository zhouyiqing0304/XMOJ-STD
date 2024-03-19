#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	for(int i=s.size()-1;i>=0;i--)if(i>0)cout<<s[i]<<',';else cout<<s[0];
}
