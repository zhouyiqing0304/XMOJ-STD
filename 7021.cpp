#include <bits/stdc++.h>
using namespace std;
struct S{
    long long a;
    int b;
} s[200020];
long long n,k;
bool cmp(const S& s1,const S& s2){
    return s1.a<s2.a;
}
int main(){
	cin>>n>>k;
    for(int i=0;i<n;++i)cin>>s[i].a>>s[i].b;
    sort(s,s+n,cmp);
    for(int i=0;i<n;++i){
        if(s[i].a>k) break;
        k+=s[i].b;
    }
	cout<<k;
    return 0;
}
