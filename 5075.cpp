#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,adr[110],itv[110],wds[110],i,tm;
    cin>>n>>l;
    for(i=0;i<n;++i) cin>>adr[i]>>itv[i]>>wds[i];
    adr[n]=l,tm=adr[0];
    for(i=0;i<n;i++){
        if(tm%(wds[i]*2)>wds[i]-itv[i]) tm+=wds[i]*2-tm%(wds[i]*2);
        tm+=adr[i+1]-adr[i];
    }
    cout<<tm;
    return 0;
}
