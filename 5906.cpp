#include <bits/stdc++.h>
using namespace std;
int n,a[20][10],flower[130],num[130],ans;
char s[10];
int main(){
    flower['S']=0,flower['H']=1,flower['C']=2,flower['D']=3;
    for(int i=2;i<10;++i) num[i+'0']=i;
    num['A']=1,num['T']=10,num['J']=11,num['Q']=12,num['K']=13;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>s;
        ++a[num[s[1]]][flower[s[0]]];
    }
    for(int i=1;i<=13;++i){
        int two=0,all=0;
        for(int j=0;j<4;++j){
            all+=a[i][j];
            two+=a[i][j]/2;
        }
        if(all>=6) ans+=2;
        else if(all>=3&&two) ans+=1;
    }
    cout<<ans;
    return 0;
}
