#include<bits/stdc++.h>
using namespace std;
stack<char> sta;
char c;
int main(){
    while((c=getchar())!='@'){
        if(c=='(') sta.push(c);
        if(c==')')
            if(sta.empty()){
                printf("NO");
                return 0;
            }else
                sta.pop();
    }
    if(sta.empty()) printf("YES");
    else printf("NO");
    return 0;
}
