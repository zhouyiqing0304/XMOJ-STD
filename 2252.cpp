#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,m,l;
	queue<long long> q;
	string s;
	cin>>n;
	for(long long i=0;i<n;i++){
		cin>>s;
		if(s=="Push"){
			cin>>m;
			for(long long j=0;j<m;j++){
				cin>>l;
				q.push(l);
			}
		}
		else if(s=="Front"){
			if(q.size())
				cout<<q.front();
			else
				cout<<-1;
			cout<<endl;
		}
		else if(s=="Size"){
			cout<<q.size();
			cout<<endl;
		}
		else if(s=="Pop"){
			cin>>m;
			for(long long j=0;j<m;j++){
				if(q.size()){
					cout<<q.front()<<' ';
					q.pop();
				}
				else{
					cout<<-1;
					break;
				}
			}
			cout<<endl;
		}
		else if(s=="Size"){
			cout<<q.size();
			cout<<endl;
		}
	}
}
