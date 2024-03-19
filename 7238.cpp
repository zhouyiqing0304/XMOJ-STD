#include<bits/stdc++.h>
using namespace std;
bool isT(int x)
{
	for(;x>=10;x/=10){
		if(x/10%10!=x%10)return 0;
	}
	return 1;
}
int main()
{
	freopen("number.in","r",stdin);
	freopen("number.out","w",stdout);
	int n,i;
	cin>>n;
	stringstream ss;
	ss<<n;
	string s;
	ss>>s;
	int sum=0;
	sum+=(s.size()-1)*9;
	sum+=s[0]-'0'-1;
	for(i=n;isT(i)!=true;i--);
	for(;i>10;i/=10);
	if(s[0]-'0'==i) sum++;
	cout<<sum;
	return 0;
}
