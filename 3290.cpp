#include<bits/stdc++.h>
using namespace std;
int a[10100];
int b[10010];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(i%2==0)cout<<a[i]<<' ';
		else b[i/2]=a[i];
	}
	for(int i=n/2-1;i>=0;i--){
		cout<<b[i]<<' ';
	}
}
