#include<bits/stdc++.h>
using namespace std;
int main()
{
    string sss,ss,s;
    getline(cin,s);
    s=" "+s+" ";
    cin>>ss;
    cin>>sss;
    int a=s.find(" "+ss+" "),b=ss.size();
    if(a>=s.length()){
    while(s[0]==' ')
    	s.erase(0,1);
    while(s[s.length()-1]==' ')
    	s.erase(s.length()-1,1);
    	cout<<s;
    	return 0;
	}
	for(int i=0;i<100&&a!=-1;i++){
    s.replace(a+1,b,sss);
    a=s.find(" "+ss+" "),b=ss.size();
	}
    while(s[0]==' ')
    	s.erase(0,1);
    while(s[s.length()-1]==' ')
    	s.erase(s.length()-1,1);
    cout<<s;
}
