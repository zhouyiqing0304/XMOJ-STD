#include <bits/stdc++.h>
using namespace std;
int n;
string s;
bool b[10010];
int main(){
	int i,j,n;
	memset(b,true,sizeof(b));
    cin>>n;
    for(i=0;i<n;++i){
        cin>>s;
        int wh=0,cdw=0,gr=0;
        for(j=s.size()-1;j>=0;--j){
            if(s[j]=='G'&&!gr||s[j]=='W'&&!wh)
                break;
            if(s[j]=='R') ++gr;
            if(s[j]=='G') --gr,++cdw,wh=1;
            if(s[j]=='W'){
                if(cdw) --cdw;
                wh=1;
            }
        }
        if(j>=0||cdw||gr) b[i]=false;
    }
    for(i=0;i<n;i++) if(b[i]) cout<<"possible"<<endl;
	else cout<<"impossible"<<endl;
    return 0;
}
