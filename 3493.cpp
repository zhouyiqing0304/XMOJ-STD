#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("a.in","r",stdin);
	freopen("a.out","w",stdout);
	string s;
	cin>>s;
	if(s[0]!='A'){
		cout<<"WA";
		return 0;
	}
	if(tolower(s[1])!=s[1]){
		cout<<"WA";
		return 0;
	}
	if(tolower(s[s.size()-1])!=s[s.size()-1]){
		cout<<"WA";
		return 0;
	}
	int sum=0;
	for(int i=2;i<=s.size()-2;i++){
		if(s[i]=='C'){
			sum++;
			continue;
		}
		if(tolower(s[i])!=s[i]){
			cout<<"WA";
			return 0;
		}
		if(sum>1){
			cout<<"WA";
			return 0;
		}
	}
	if(sum!=1){
		cout<<"WA";
		return 0;
	}
	cout<<"AC";
	return 0;
}
