#include<bits/stdc++.h>
using namespace std;
int i,n,maxn=100010,sum=100010,a[100010],b[100010];
int main(){
	string s;
	getline(cin,s);
	n=s.length();
	for(i=0;i<n;i++)a[i]=(int)s[i]+128;
	for(i=0;i<n;i++)b[a[i]]++;
	for(i=0;i<n;i++)
		if(b[a[i]]<sum)
			sum=b[a[i]],maxn=a[i];
	if(sum>1)cout<<"no";
	else cout<<(char)(maxn-128);
	return 0;
}
