#include<bits/stdc++.h>
using namespace std;
int main()
{
	bool b[1024];
	int n=0,i=0;
	cin>>n;
	int tt=0,nn=0,ii=0,jj=0,oo=0;
	for(i=0;i<n;i++){
		tt=0,nn=0,ii=0,jj=0,oo=0;
		cin>>tt;
		for(;ii<tt;ii++){
			cin>>nn;
			if(nn%2==0)oo++;
			else jj++;
		}
		if(jj%2!=0||jj*oo!=0) b[i]=true;
		else b[i]=false;
	}
	for(i=0;i<n;i++) if(b[i]) cout<<"YES"<<endl; else cout<<"NO"<<endl;
	return 0;
}
