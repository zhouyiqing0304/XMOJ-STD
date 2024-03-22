#include<bits/stdc++.h>
using namespace std;
struct rec{
    int l,t,w,h;
}a[10010];
int R,n;
long long dis(int mid){
    long long suml=0,sumr=0;
    for(int i=1;i<=n;i++){
        if(a[i].l+a[i].w<=mid)
            suml+=a[i].w*a[i].h;
        else if(a[i].l>=mid)
            sumr+=a[i].w*a[i].h;
        else
            suml+=(mid-a[i].l)*a[i].h,sumr+=(a[i].l+a[i].w-mid)*a[i].h;
    }
    return suml-sumr;
}
int main()
{
    cin>>R>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i].l>>a[i].t>>a[i].w>>a[i].h;
    }
    int l=0,r=R,mid;
    while(l<=r){
        mid=(l+r)/2;
        if(dis(mid)<0)l=mid+1;
        else r=mid-1;
    }
    r=R;
    if(l>=R){
        cout<<R;
        return 0;
    }
    if(dis(l+1)>dis(l)){
        cout<<l;
        return 0;
    }
    long long v=dis(l);
    while(l<=r){
        mid=(l+r)/2;
        if(dis(mid)<=v) l=mid+1;
        else r=mid-1;
    }
    cout<<r;
    return 0;
}
