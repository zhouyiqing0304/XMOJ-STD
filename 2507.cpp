#include <bits/stdc++.h>
using namespace std;
long long n,x,t[1000000]={4,9,25,49},cnt=4;
bool isPrime(int x){
    for(int i=3;i*i<=x;++i)
        if(x%i==0)
            return false;
    return true;
}
bool f(long long x){
    int l=0,r=cnt-1,mid;
    while(l<=r){
        mid=(l+r)/2;
        if(t[mid]==x) return true;
        if(t[mid]<x) l=mid+1;
        else r=mid-1;
    }
    return false;
}
int main(){
    for(long long i=11;i*i<=1e12;i+=2)
        if(isPrime(i))
            t[cnt++]=i*i;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>x;
        if(f(x)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
