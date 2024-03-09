#include <bits/stdc++.h>
using namespace std;
int _,__,___,p3,t1,t2,l[110],r[110],ans;
int main(){
    cin>>_>>__>>___>>p3>>t1>>t2;
    for(int i=1;i<=_;i++){
        cin>>l[i]>>r[i];
        ans+=(r[i]-l[i])*__;
        if(i>1){
            int k=l[i]-r[i-1];
            if(k<=t1) ans+=k*__;
            else if(k<=t1+t2) ans+=t1*__+(k-t1)*___;
            else ans+=t1*__+t2*___+(k-t1-t2)*p3;
        }
    }
    cout<<ans<<endl;
    return 0;
}

