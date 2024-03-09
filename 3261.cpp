#include<bits/stdc++.h>
using namespace std;
string decrypt(string str)
{
	string st;
	st=str[0];
	//if(str[0]==str[1]||str[str.size()-1]==str[str.length()-2]) return "NO";
	if(str.size()%2==1) return "NO";
	for(int i=1;i<str.size()-1;i+=2){
		if(str[i]==str[i+1]) st+=str[i];
		else return "NO";
	}
	st+=str[str.length()-1];
	return st;
}
int main()
{
	string str,st;
	int i;
	cin>>i;
	for(;i>0;i--){
		cin>>str;
		st+=decrypt(str);
		st+="\n";
	}
	cout<<st;
	return 0;
}
