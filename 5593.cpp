#include <bits/stdc++.h>
using namespace std;
int a,b,tot,ans;
int main()
{
    cin>>a>>b;
    for(int i=a;i<=b;++i){
        int x=i,y=1,m=0;
        while(x) y*=10,m++,x/=10;
        y/=10,x=i;
        for(int j=0;j<m;++j){
            x=x%10*y+x/10;
            if(x==i) break;
            if(i<x&&x<=b) ans++;
        }
    }
    cout<<ans;
    return 0;
}
