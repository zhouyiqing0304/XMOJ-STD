#include<bits/stdc++.h>
using namespace std;
int main()
{
	long double n,m,i,s,p=200;
	cin>>n>>m;
	s=n;
	for(i=0;i<20;i++){
		if(s>=p){
			cout<<++i;
			return 0;
		}
		p=p+p*m/100;
		s+=n;
	}
	cout<<"Impossible";
	
}
