#include<bits/stdc++.h>
using namespace std;
int maxn(int n)
{
	int a,b,c;
	a=n/100,b=n/10%10,c=n%10;
	if(a<b)swap(a,b);
	if(b<c)swap(b,c);
	if(a<b)swap(a,b);
	n=a*100+b*10+c;
	return n;
}
int minn(int n)
{
	int a,b,c;
	a=n/100,b=n/10%10,c=n%10;
	if(a>b)swap(a,b);
	if(b>c)swap(b,c);
	if(a>b)swap(a,b);
	n=a*100+b*10+c;
	return n;
}
string tos(int n)
{
	stringstream ss;
	ss<<n;
	string s;
	ss>>s;
	for(;s.size()!=3;s.insert(0,"0"));
	return s;
}
int main()
{
	int n,m;
	cin>>n;
	do{
		cout<<tos(maxn(n))<<'-'<<tos(minn(n))<<'='<<maxn(n)-minn(n)<<endl;
		n=maxn(n)-minn(n);
	}
	while(n!=495);
}
