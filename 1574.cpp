#include <bits/stdc++.h>
using namespace std;

const int N=1000010;
int n,m,a[N],ans=-0x3f3f3f3f;

struct A {
    int v,p;
    bool operator < (const A& a) const {
        return v>a.v;
    }
};

priority_queue<A> pq;

int main() {
    scanf("%d%d",&n,&m);
    for (int i=1;i<=n;++i) scanf("%d",&a[i]);
    for (int i=1;i<=n;++i) a[i]+=a[i-1];
    for (int i=1;i<=n;++i) {
        pq.push((A){a[i-1],i-1});
        while (pq.top().p+m<i) pq.pop();
        ans=max(ans,a[i]-pq.top().v);
    }
    printf("%d\n",ans);
    return 0;
}

