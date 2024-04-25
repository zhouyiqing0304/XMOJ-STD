#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,s=0;
	cin>>n;
	while(1)
		if(n-100>=0)s++,n-=100; else break;
	while(1)
		if(n-20>=0)s++,n-=20; else break;
	while(1)
		if(n-10>=0)s++,n-=10; else break;
	while(1)
		if(n-5>=0)s++,n-=5; else break;
	while(1)
		if(n-1>=0)s++,n-=1; else break;
	cout<<s<<endl;
}

