#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("reversi.in","r",stdin);
	freopen("reversi.out","w",stdout);
	string s;
	int cnt=0;
	cin>>s;
	for(int i=0;i<s.length()-1;i++)
		if(s[i]!=s[i+1]) cnt++;
	cout<<cnt;
	return 0;
}
