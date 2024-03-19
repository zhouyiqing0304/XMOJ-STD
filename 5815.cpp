#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;
	cin>>a>>b;
	for(int i=a.length()-1;i>=0;i--){
		if(a.substr(i,b.length())==b) {
			cout<<i;return 0;
		}
	}
	cout<<-1;
	return 0;
}
