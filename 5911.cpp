#include <bits/stdc++.h>
using namespace std;
char s[100010];
int n;
bool f(int n){
    for(int i=0,j=n-1;i<j;++i,--j)
        if(s[i]!=s[j])
            return false;
    return true;
}
int main(){
    cin>>s;
    n=strlen(s);
    while(n%2==0&&f(n))
        n/=2;
    cout<<n<<endl;
    return 0;
}
