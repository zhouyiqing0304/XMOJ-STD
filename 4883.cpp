#include<bits/stdc++.h>
using namespace std;
int n,m;bool b;
int main()
{
	cin>>n>>m;
	int k;
	for(int i=0;i<n;i++){
		cin>>k;
		if(k%m==0){
			cout<<k<<' ';
			b=true;
		}
	}
	if(!b)cout<<"no";
}
