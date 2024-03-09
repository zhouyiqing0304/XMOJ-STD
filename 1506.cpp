#include <bits/stdc++.h>
using namespace std;
int n,v,ci,wi,opt[1010];
int main()
{
    cin>>v>>n;
    for (int i=0;i<n;++i) {
        cin>>ci>>wi;
        for (int j=ci;j<=v;++j) opt[j]=max(opt[j],opt[j-ci]+wi);
    }
    cout<<opt[v]<<endl;
    return 0;
}
