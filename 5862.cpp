#include <bits/stdc++.h>
using namespace std;
int n,m,a[100010],b[100010],c[100010],cnt;
// 在b中查找id是否存在
bool f(int id){
    int l=0,r=m-1,mid;
    while(l<=r){
        mid=(l+r)/2;
        if(b[mid]==id) return true;
        if(b[mid]<id) l=mid+1;
        else r=mid-1;
    }
    return false;
}
int main(){
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;++i)
        scanf("%d",&a[i]);
    for(int i=0;i<m;++i)
        scanf("%d",&b[i]);
    sort(b,b+m);
    for(int i=0;i<n;++i)
        if(f(a[i]))
            c[cnt++]=a[i];
    printf("%d\n",cnt);
    for(int i=0;i<cnt;++i)
        printf("%d ",c[i]);
    return 0;
}
