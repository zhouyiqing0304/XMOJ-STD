#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int a[10],sum=0;
	for(int i=1;i<5;i++)cin>>a[i];
	cin>>s;
	for(int i=0;i<s.size();i++) sum+=a[s[i]-'0'];
	cout<<sum;
 } 
