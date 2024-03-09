#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n=1,m=1,a=1;
	cin>>n>>m;
	for(;a<m&&a<=n;a++){
		if(n%a==0&&n%(m-a)==0){
			cout<<a;
			return 0;
		}
	}
	cout<<-1;
	return 0;
}
