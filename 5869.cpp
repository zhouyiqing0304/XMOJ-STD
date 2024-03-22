#include <bits/stdc++.h>
using namespace std;
int n,m,x,a[1010],d,w,ans;
int b[10]={365,120,30,7,3,1};
int c[10]={ 12,  9, 6,4,2,1};
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;++i)
        a[i]=1;
    for(int i=0;i<m;++i){
        cin>>x;
        a[x]=0;
    }
    for(int i=1;i<=n;++i){
        if(a[i]==0) ++w;
        else{
            if(w){
                d-=(1<<(w-1));
                if(d<0) d=0;
                w=0;
            }
            ++d;
            for(int j=0;j<6;++j)
                if(d>=b[j]){
                    ans+=c[j];
                    break;
                }
        }
    }
    cout<<ans;
    return 0;
}
