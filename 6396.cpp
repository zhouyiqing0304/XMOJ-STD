#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("cipher.in","r",stdin);
    freopen("cipher.out","w",stdout);
    char s[1234];
    int i;
    cin>>s;
    for(i=0;i<strlen(s);i++) s[i]=(s[i]-i+1234)%26+'A';
    cout<<s;
    return 0;//KCVSS
}
