#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]==')'){
			for(int j=i-1;j>=0;j--){
				if(s[j]=='('){
					cout<<j<<' '<<i<<endl;
					s.replace(i,1," ");
					s.replace(j,1," ");
					break;
				}
			}
		}
	}
	return 0;
}
