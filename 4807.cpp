#include<bits/stdc++.h>
using namespace std;
bool isp(int a,int b)
{
	if(b<2) return true;
	if(a%b==0) return false;
	return isp(a,b-1);
}
int main()
{
	int i,n,j;
	int st[5120];
	cin>>n;
	bool s[8192];
	memset(s,false,sizeof(s));
	memset(st,0,sizeof(st));
	s[2]=true;
	for(i=3;i<=n;i+=2){
		if(isp(i,i/2+1)) s[i]=true;
	}
	for(i=2,j=0;i<=n;i++) if(s[i]==true) {st[j]=i;j++;}
	for(i=0;i<n;i++){
		for(j=0;j<4;j++,i++)
			if(st[i+1]) cout<<st[i]<<',';
			else if(st[i]) cout<<st[i];
		if(st[i]) cout<<st[i]<<endl;
	}
	return 0;
}
