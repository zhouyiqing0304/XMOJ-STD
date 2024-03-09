#include<bits/stdc++.h>
using namespace std;
int n,a[200010],f[10],i;
char c;
int main(){
    cin>>n;
    for(i=0;i<n;++i){
        cin>>c;
        a[i]=c-'0';
    }
    for(i=1;i<=9;++i)
        cin>>f[i];
    for(i=0;i<n;++i)
        if(a[i]>=f[a[i]])
            cout<<a[i];
        else
            break;
    for(;i<n&&f[a[i]]>=a[i];++i)
        cout<<f[a[i]];
    for(;i<n;++i)
        cout<<a[i];
    return 0;
}
