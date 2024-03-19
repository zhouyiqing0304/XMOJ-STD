#include<bits/stdc++.h>
#define LL long long
using namespace std;
int n,ans;
int gcd(int x,int y){return y?gcd(y,x%y):x;}
void calc(LL oth){
    for (int u=1; u<=sqrt(oth); u++){
        int v=sqrt(oth-u*u);
        if (u>=v) continue;
        if (u*u+v*v!=oth) continue;
        if (gcd(u,v)!=1) continue;
        ans++;
    }
}
int main(){
    cin>>n;
    for (int i=1; i<=sqrt((LL)n*2); i++) if ((LL)n*2%i==0) calc(i),calc((LL)n*2/i);
    cout<<4+4*ans;
    return 0;
}
