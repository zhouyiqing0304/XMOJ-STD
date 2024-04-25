#include<bits/stdc++.h>
using namespace std;
bool friendlythree(int a,int b,int c)
{
	if(a==b)return false;
	if(c==b)return false;
	if(a==c)return false;
	if((a<b)&&(c<b))return true;
	if((a>b)&&(c>b))return true;
	return false;
}
int a[111];
int main()
{
	freopen("triple.in","r",stdin);
	freopen("triple.out","w",stdout);
	int n,s=0;
	cin>>n;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n-2;i++)if(friendlythree(a[i],a[i+1],a[i+2]))s++;
	cout<<s;
	return 0;
}
