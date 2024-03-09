#include<bits/stdc++.h>
using namespace std;
int main()
{
	char c;
	int n;
	cin>>n>>c;
	for(int i=0;i<n;i++){
		cout<<c;
	}
	cout<<endl;
	n-=2;
	for(int i=0;i<n;i++){
		cout<<c;
		for(int j=0;j<n;j++){
			if(i==j||i==n-j-1) cout<<c;
			else cout<<' ';
		}
		cout<<c<<endl;
	}
	for(int i=0;i<n+2;i++){
		cout<<c;
	}
	return 0;
 } 
