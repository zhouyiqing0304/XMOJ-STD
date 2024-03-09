#include<bits/stdc++.h>
using namespace std;
int a[100000],b[100000],m,j,o;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		o=lower_bound(b,b+m,a[i])-b;
		if(o>=m) m++,b[j++]=a[i];
		else b[o]=a[i];
	}
	cout<<m<<endl;
	for(int i=0;i<m;i++)cout<<b[i]<<' ';
	return 0;
}
