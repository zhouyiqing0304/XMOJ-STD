#include<bits/stdc++.h>
using namespace std;
int n,m,a[100010],b[100010],ans,l;
int main(){
    cin>>m;
    for(int i=0;i<m;++i) cin>>a[i];
    cin>>n;
    for(int i=0;i<n;++i) cin>>b[i];
    sort(a,a+m);
    sort(b,b+n);
    for(int i=0;i<m;++i)
        for(int k=l;k<n;++k){
            if(b[k]==0) continue;
            if(abs(a[i]-b[k])<=1){
                b[k]=0,l=k,ans++;
                break;
            }
        }
    cout<<ans;
    return 0;
}

