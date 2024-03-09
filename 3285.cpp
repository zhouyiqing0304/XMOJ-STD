#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b,sum;
	char c,aa,bb;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>aa>>bb>>c;
		a=(aa-48)*10+bb-48;
		cin>>aa>>bb;
		b=(aa-48)*10+bb-48;
		sum=(24-a-1)*60+60-b;
		cout<<sum<<endl;
	}
}
