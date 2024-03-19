#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,s=0;
	cin>>n;
	for(int i=1;i<n;i++){
		cin>>m;
		s+=m;
	}
	cout<<(n-2)*180-s<<endl;
	return 0;
}
