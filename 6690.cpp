#include<bits/stdc++.h>
using namespace std;
bool cmp(char x,char y){
	return x>y;
}
int g2(int x)
{
	stringstream ss;
	string s;
	ss<<x;
	ss>>s;
	sort(s.begin(),s.end(),cmp);
	ss.clear();
	ss<<s;
	ss>>x;
	return x;
}
int g1(int x)
{
	stringstream ss;
	string s;
	ss<<x;
	ss>>s;
	sort(s.begin(),s.end());
	ss.clear();
	ss<<s;
	ss>>x;
	return x;
}
int f(int n)
{
	return g2(n)-g1(n);
}
int main()
{
	long long n,k;
	cin>>n>>k;
	long long a=n;
	for(int i=0;i<k;i++) a=f(a);
	cout<<a;
	return 0;
}
