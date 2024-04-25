#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m=1000000;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(m>a[i])m=a[i];
	}
	cout<<m<<endl;
	for(int i=0;i<n;i++){
		if(m==a[i])cout<<i+1<<' ';
	}
}
