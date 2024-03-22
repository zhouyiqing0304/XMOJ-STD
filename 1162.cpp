#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n==1) {
		cout<<"End";
		return 0;
	}
	do{
		if(n%2==0) cout<<n<<"/2=",n/=2,cout<<n<<endl;
		else cout<<n<<"*3+1=",n*=3,n++,cout<<n<<endl;
	}while(n>1);
	cout<<"End";
}
