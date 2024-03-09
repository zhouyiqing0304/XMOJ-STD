#include<bits/stdc++.h>
using namespace std;
string cc;
int n;
string intToA(int n,int radix)
{
    string ans="";
    do{
        int t=n%radix;
        if(t>=0&&t<=9)    ans+=t+'0';
        else ans+=t-10+'a';
        n/=radix;
    }while(n!=0);
    reverse(ans.begin(),ans.end());
    return ans;    
}
int main()
{
	cin>>n; 
	cc=intToA(n,3);
	for(int i=cc.size()-1;i>0;i--){
		if(cc[i]!=cc[i-1]){
			cout<<"no";
			return 0;
		}
	}
	cout<<"yes";
	return 0;
 } 
