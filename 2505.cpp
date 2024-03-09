#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m[111],i;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>m[i];
	}
	if(m[0]%2!=m[1]%2){
		if(m[1]%2!=m[2]%2){
			cout<<2;
			return 0;
		}
		else{
			cout<<1;
			return 0;
		}
	}
	else{
		for(i=2;i<n;i++){
			if(m[i]%2!=m[0]%2){
				cout<<++i;
				return 0;
			}
		}
	}
}
