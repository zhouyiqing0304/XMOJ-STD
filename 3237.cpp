#include<bits/stdc++.h>
using namespace std;
int main()
{
	double n=10000,m;
	string s,e;
	stringstream ss,se;
	for(;n<100000;n++){
	m=n*10+6;
	ss<<m;
	se<<m+6;
	ss>>s;
	se>>e;
	if((double)((s[0]-48)+(s[1]-48)+(s[2]-48)+(s[3]-48)+(s[4]-48)+(s[5]-48))/6 == (double)((e[0]-48)+(e[1]-48)+(e[2]-48)+(e[3]-48)+(e[4]-48)+(e[5]-48))) {
		//cout<<(double)((s[0]-48)+(s[1]-48)+(s[2]-48)+(s[3]-48)+(s[4]-48)+(s[5]-48))/6<<' '<<(double)((e[0]-48)+(e[1]-48)+(e[2]-48)+(e[3]-48)+(e[4]-48)+(e[5]-48))<<endl;
		cout<<m<<endl; 
	}
	ss.clear();
	se.clear();
	}
	return 0;
}
