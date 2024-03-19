#include <bits/stdc++.h>
using namespace std;
long long n,m,a[100010],b[100010],ans;
// 为预算x计算最接近的价格与其差值
int f(int x){
    if(x<=b[0]) // x<=b[0], 用b[0]计算
        return b[0]-x;
    if(b[m-1]<=x) // b[m-1]<=x, 用b[m-1]计算
        return x-b[m-1];
    int l=0,r=m-1,mid;
    // 在b中查找第一个大于等于x的数
    while(l<=r){
        mid=(l+r)/2;
        if(b[mid]<x) l=mid+1;
        else r=mid-1;
    }
    return min(abs(b[l-1]-x),abs(b[l]-x));
}
int main(){
    scanf("%lld",&n);
    for(int i=0;i<n;++i)
        scanf("%lld",&a[i]);
    scanf("%lld",&m,&n);
    for(int i=0;i<m;++i)
        scanf("%lld",&b[i]);
    sort(b,b+m); // 所有方案按价格从低到高排序
    // 贪心策略: 每个项目都找与预算差距最小的价格
    for(int i=0;i<n;++i)
        ans+=f(a[i]);
    printf("%lld\n",ans);
    return 0;
}
