#include<bits/stdc++.h>
using namespace std;
int a[1010];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<a[n-1];
	for(int i=0;i<n-1;i++){
		cout<<' '<<a[i];
	}
}
