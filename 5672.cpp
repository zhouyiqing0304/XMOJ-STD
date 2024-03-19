#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
struct P{
    int a,b,s; // b的a次方等于s
} u[1000010];
int t,x,y,cnt;
int main(){
    for(int i=2;i<=1000;++i)
        // i的d次方等于j
        for(int j=i*i,d=2;j<=N;j*=i,++d)
            if(u[j].s==0)
                u[j]=(P){d,i,j};
    scanf("%d",&t);
    for(int i=0;i<t;++i){
        scanf("%d%d",&x,&y);
        if(y%x)
            printf("0 0\n");
        else{
            int p=y/x;
            if(u[p].s)
                printf("%d %d\n",u[p].a,u[p].b);
            else
                printf("1 %d\n",p);
        }
    }
    return 0;
}
