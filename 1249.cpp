#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b=0,c=0;
	cin>>a;
	for(int i=1;i<=a;i++){
		if(i%2==0) b+=i;
		else c+=i;
	}
	cout<<c<<endl<<b<<endl<<c-b;
	return 0;
}
