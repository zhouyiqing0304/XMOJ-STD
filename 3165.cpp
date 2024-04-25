#include<bits/stdc++.h>
using namespace std;
int n,a,b,x[1010],s;
int main()
{
	cin>>n;
	for(int i=1;i<n;i++) cin>>x[i];
	cin>>a>>b;
	for(int i=a;i<b;i++) s+=x[i];
	cout<<s;
}
