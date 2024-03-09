#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str,st;int i,n,j,k=0;
	cin>>str;
	n=str.length();
	for(i=0;i<n;i++){
		if(str[i]!='0'){
			st+=str[i];
			for(j=1;j<n-i;j++) st+="0";
			st+=" ";
			k++;
		}
	}
	cout<<k<<endl<<st;
	return 0;
}
