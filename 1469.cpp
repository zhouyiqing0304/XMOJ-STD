#include<bits/stdc++.h>
using namespace std;
int f(int m,int n)
{
	if(m==0||m==1||n==1)return 1;
	if(m<n) return f(m,m);
	if(m>=n) return f(m-n,n)+f(m,n-1);
}
int main()
{
	int n,m,t;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>m>>n;
		cout<<f(m,n)<<endl;
	}
	return 0;
}
