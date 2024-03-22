#include <bits/stdc++.h>
using namespace std;
long long t,m,c[10010],w[10010];
long long f[10000010];
int main(){
    cin>>t>>m;
    for(int i=1;i<=m;++i)
        cin>>c[i]>>w[i];
    for(int i=1;i<=m;++i)
        for(int j=c[i];j<=t;++j)
            f[j]=max(f[j],f[j-c[i]]+w[i]);
    cout<<f[t]<<endl;
    return 0;
}
