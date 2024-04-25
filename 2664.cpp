#include<bits/stdc++.h>
using namespace std;
int m;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>m;
		if(m%2==0)
			if(m%2==1)cout<<++m;
			else cout<<--m;
		else cout<<m;
		cout<<' ';
	}
}
