#include<bits/stdc++.h>
using namespace std;
int main()
{
	int s,n,i,j,m,k,o=-32767,h;
	cin>>n>>m;
	for(i=0;i<n;i++){
		s=0;
		for(j=0;j<m;j++){
			cin>>k;
			s+=k;
		}
		if(s>o){
			o=s;
			h=i;
		}
	}
	cout<<h+1<<' '<<o; 
	return 0;
}
