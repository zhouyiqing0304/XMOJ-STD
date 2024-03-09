#include<bits/stdc++.h>
using namespace std;
int main()
{
	stringstream ss;
	string s;
	cin>>s;
	int n,m,i,j=0,tmp,sum=0;
	cin>>n;
	if(n==0){
		cout<<s;
		return 0;
	}
	for(i=0;i<n;i++){
		cin>>m;
		ss<<s.substr(j,m-j);
		j=m;
		ss>>tmp;
		sum+=tmp;
		ss.clear();
		ss.str("");
	}
	ss<<s.substr(m,1024);
	ss>>tmp;
	sum+=tmp;
	cout<<sum;
    return 0;
}
