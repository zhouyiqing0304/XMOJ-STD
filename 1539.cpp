#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<long long> sta;
	string s;
	long long n,m,i,j,k,l;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>s;
		if(s=="PUSH"){
			cin>>j;
			sta.push(j);
		}
		if(s=="POP"){
			if(sta.size()==0) cout<<"error"<<endl;
			else {
				cout<<sta.top()<<endl;
				sta.pop();
			}
		}
	}
	if(sta.size()==0) {
		cout<<"empty";
		return 0;
	}
	for(;sta.size()>0;){
		cout<<sta.top()<<' ';
		sta.pop();
	}
	return 0;
}
