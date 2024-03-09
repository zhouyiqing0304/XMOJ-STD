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
		if(s=="Push"){
			cin>>j;
			for(k=0;k<j;k++){
				cin>>l;
				sta.push(l);
			}
		}
		if(s=="Top"){
			if(sta.size()>0)
				cout<<sta.top();
			else
				cout<<-1;
			cout<<endl;
		}
		if(s=="Size"){
			cout<<sta.size();
			cout<<endl;
		}
		if(s=="Pop"){
			cin>>j;
			for(k=0;k<j;k++){
				if(k>sta.size()+1){
					cout<<-1;
					break;
				}
				cout<<sta.top()<<' ';
				sta.pop();
			}
			cout<<endl;
		}
	}
}
