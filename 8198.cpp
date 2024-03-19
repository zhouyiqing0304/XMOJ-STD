#include<bits/stdc++.h>
using namespace std;
string s;
int sum=0;
int main()
{
	freopen("loong.in","r",stdin);
	freopen("loong.out","w",stdout);
	cin>>s;
	int x=s.size();
	if(x<5){
		cout<<0<<endl;
		return 0;
	}
	for(int i=0;i<x-4;i++){
		if(s.substr(i,5)=="loong")sum++;
	}
	cout<<sum<<endl;
	return 0;
}
