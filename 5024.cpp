#include <bits/stdc++.h>
using namespace std;
int isprime(long long n){
    if(n<2) return 0;
    for(long long i=2;i*i<=n;i++) if(n%i==0) return 0;
    return 1;
}
string s;
long long m=1,ans,v,k;
int main(){
    cin>>s;
    for(int i=1;i<s.size();i++) m*=2;
    for(int i=0;i<m;++i){
        k=s[0]-'0',v=0;
        for(int j=1,x=i;j<s.size();j++,x/=2){
            if(x%2) v+=k,k=0;
            k=k*10+s[j]-'0';
        }
        v+=k,ans+=isprime(v);
    }
    cout<<ans;
    return 0;
}
