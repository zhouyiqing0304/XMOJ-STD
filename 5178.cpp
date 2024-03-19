#include <bits/stdc++.h>
using namespace std;
string s,u,v;
int f1,f2;
int main(){
    cin>>s>>u>>v;
    if(s.find(u)!=string::npos&&
       s.find(v,s.find(u)+u.size())!=string::npos)
        f1=true;
    reverse(s.begin(),s.end());
    if(s.find(u)!=string::npos&&
       s.find(v,s.find(u)+u.size())!=string::npos)
        f2=true;
    if(f1&&f2) cout<<"both";
    else if(f1) cout<<"forward";
    else if(f2) cout<<"backward";
    else cout<<"fantasy";
    return 0;
}
