#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("a.in","r",stdin);
	freopen("a.out","w",stdout);
	int n;
	cin>>n;
	for(int i=0;i<=n/4+1;i++)
	for(int j=0;j<=n/7+1;j++){
		if(i*4+j*7==n){
			cout<<"Yes";
			return 0;
		}
	}
	cout<<"No";
	return 0;
}
