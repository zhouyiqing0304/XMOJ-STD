#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,t;
	cin>>s>>t;
	int c=s.size()+t.size();
	for(;s.length()<t.length();s+=s);
	for(int i=0;;i++){
		if(i>c){
			cout<<-1;
			return 0;
		}
		if(i+t.length()>=s.length()) s+=s;
		if(s.substr(i,t.length())==t) {
			cout<<i;return 0;
		}
	}
}
