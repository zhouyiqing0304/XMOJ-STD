#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0,j=1;i<=31;i++,j*=2)
		if(n==j){
			cout<<"Yes";
			return 0;
		}
	cout<<"No";
	return 0;
}
