#include <bits/stdc++.h>
using namespace std;
int k,n,top;
long long x,sta[1000010];
char s[10];
int mySize(){
    return top;
}
bool myEmpty(){
    return top==0;
}
void myPush(long long x){
    sta[++top]=x;
}
long long myPop(){
    return sta[top--];
}
long long myTop(){
    if(myEmpty()) return -1;
    return sta[top];
}
int main(){
    scanf("%d",&k);
    for(int i=0;i<k;++i){
        scanf("%s",s);
        if(s[0]=='p'&&s[1]=='u'){
            scanf("%d",&n);
            for(int j=0;j<n;++j){
                scanf("%lld",&x);
                myPush(x);
            }
        }
        if(s[0]=='p'&&s[1]=='o'){
            scanf("%d",&n);
            if(myEmpty()) printf("-1");
            else printf("%lld",myPop());
            for(int j=1;j<n;++j)
                if(myEmpty()) printf(",-1");
                else printf(",%lld",myPop());
            printf("\n");
        }
        if(s[0]=='t'){
            if(myEmpty()) printf("-1\n");
            else printf("%lld\n",myTop());
        }
        if(s[0]=='s'){
            printf("%d\n",mySize());
        }
    }
    return 0;
}
