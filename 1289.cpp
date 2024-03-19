#include<bits/stdc++.h>
using namespace std;
int main()
{
	string ss,s;int n,a,b;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s>>ss;
		if(s=="Rock") a=1;
		if(s=="Paper") a=2;
		if(s=="Scissors") a=3;
		if(ss=="Rock") b=1;
		if(ss=="Paper") b=2;
		if(ss=="Scissors") b=3;
		if(a==b) cout<<"Tie"<<endl;
		if(a-b==-1) cout<<"Player2"<<endl;
		if(a-b==1) cout<<"Player1"<<endl;
		if(a-b==2) cout<<"Player2"<<endl;
		if(a-b==-2) cout<<"Player1"<<endl;
	}
 } 
