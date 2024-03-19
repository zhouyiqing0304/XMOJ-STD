#include<bits/stdc++.h>
using namespace std;
int fun(int n){
	if(n==1||n==2)return (n==1)?1:2;
	return fun(n-2)+fun(n-1);
}
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		cout<<fun(n)<<endl;
	}
	return 0;
}
