#include <bits/stdc++.h>
using namespace std;
const int MAXV=1010;
int n,v,ci,wi,opt[MAXV];
int main()
{
    cin>>v>>n;
    for (int i=0;i<n;++i) {
        cin>>ci>>wi;
        for (int j=v;j>=ci;--j)
            opt[j]=max(opt[j],opt[j-ci]+wi);
    }
    cout<<opt[v]<<endl;
    return 0;
}
