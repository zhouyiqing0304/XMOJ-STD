#include<bits/stdc++.h>
using namespace std;
int i,n,maxn=-1,sum,a[1010],b[1010];
int main(){
	string s;
	getline(cin,s);
	n=s.length();
	for(i=0;i<n;i++)a[i]=(int)s[i]+128;
	for(i=0;i<n;i++)b[a[i]]++;
	for(i=0;i<n;i++)
		if(b[a[i]]>sum)
			sum=b[a[i]],maxn=a[i];
	cin>>n;
	cout<<n*sum;
	return 0;
}
