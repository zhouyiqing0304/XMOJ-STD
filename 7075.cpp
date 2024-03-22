#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// c[i]: 小于等于a[i]的满足要求的数的数量
ll n,a[100010],c[100010],q,k;
int main(){
    scanf("%lld%lld",&n,&q);
    for(ll i=1;i<=n;++i){
        scanf("%lld",&a[i]);
        c[i]=a[i]-i;
    }
    for(ll i=1;i<=q;++i){
        scanf("%lld",&k);
        if(k>c[n])
            printf("%lld\n",a[n]+(k-c[n]));
        else{
            // 第一个大于等于k的c的下标
            ll idx=lower_bound(c+1,c+n+1,k)-c;
            printf("%lld\n",(a[idx]-1)-(c[idx]-k));
        }
    }
    return 0;
}
