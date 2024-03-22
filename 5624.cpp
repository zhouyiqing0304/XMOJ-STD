#include <bits/stdc++.h>
using namespace std;
char s[1300];
int n=1, t[260];
void pre(int idx){
    if(idx>n) return;
    printf("(");
    if(t[idx]) cout<<t[idx];
    pre(idx*2); pre(idx*2+1);
    printf(")");
}
int main(){
    cin>>s;
    int len=strlen(s);
    for(int i=1;i<=len;++i)
    {
        if('0'<=s[i]&&s[i]<='9') t[n]=t[n]*10+s[i]-'0';
        if(s[i]==',') n++;
    }
	cout<<t[1];
	pre(2);pre(3);
	return 0;
}

