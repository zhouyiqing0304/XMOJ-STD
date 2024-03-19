#include <bits/stdc++.h>
using namespace std;
struct P{
    int v,idx;
} a[100010];
bool cmp(const P& p1,const P& p2){
    return p1.v<p2.v;
}
int n,m,b;
int f(int v){
    int l=1,r=n,mid;
    while(l<=r){
        mid=(l+r)/2;
        if(a[mid].v==v) return a[mid].idx;
        if(a[mid].v>v) r=mid-1;
        else l=mid+1;
    }
    return 0;
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;++i){
        scanf("%d",&a[i].v);
        a[i].idx=i;
    }
    sort(a+1,a+1+n,cmp);
    scanf("%d",&m);
    for(int i=1;i<=m;++i){
        scanf("%d",&b);
        printf("%d\n",f(b));
    }
    return 0;
}
