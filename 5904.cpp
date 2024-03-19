#include <bits/stdc++.h>
using namespace std;
int n,m,cnt[1010],w[1010][1010],t[1010][1010];
int f[1010];
int main(){
    cin>>m>>n;
    for(int i=0,p,q,r;i<n;++i){
        cin>>p>>q>>r;
        ++cnt[r];
        w[r][cnt[r]]=p;
        t[r][cnt[r]]=q;
    }
    for(int k=1;k<=1000;++k){
        if(cnt[k]==0) continue;
        for(int j=m;j>=0;--j)
            for(int i=1;i<=cnt[k];++i)
                if(j>=w[k][i])
                    f[j]=max(f[j],f[j-w[k][i]]+t[k][i]);
    }
    cout<<f[m]<<endl;
    return 0;
}
