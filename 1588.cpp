#include<bits/stdc++.h>
using namespace std;
long long p,q,r,ans,flag;
long long f(long long x,long long c,long long o){
    if(x%10>=o) flag=0;
    if(x) return f(x/10,c*o,o)+x%10*c;
    return 0;
}
int main(){
    cin>>p>>q>>r;
    for(long long i=2;i<=16;i++){
        flag=1;
        if(f(p,1,i)*f(q,1,i)==f(r,1,i)&&flag){
            cout<<i;
            return 0;
        }
    }
    cout<<0;
    return 0;
}
