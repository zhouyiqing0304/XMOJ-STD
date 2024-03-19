#include <bits/stdc++.h>
using namespace std;
struct D{
    int val,rank;
} d[100010];
int n,m,x,y;
long long ans;
bool cmp(const D &a,const D &b){
    return a.val<b.val;
}
int f(int val){
    int l=0,r=n-1,mid;
    while(l<=r){
        mid=(l+r)/2;
        if(d[mid].val==val) return mid;
        else if(d[mid].val<val) l=mid+1;
        else r=mid-1;
    }
    if(l>r) return -1;
    return l;
}
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        scanf("%d%d",&d[i].val,&d[i].rank);
        ans+=d[i].rank;
    }
    sort(d,d+n,cmp);
    scanf("%d",&m);
    for(int i=0;i<m;++i){
        scanf("%d%d",&x,&y);
        int idx=f(x);
        if(idx==-1)
            ans+=y;
        else if(d[idx].rank<y)
            ans+=y-d[idx].rank;
    }
    cout<<ans<<endl;
    return 0;
}
