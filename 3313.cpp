#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    ll x=0;
    priority_queue<ll,vector<ll>,greater<ll> > pq;
    pq.push(1);
    scanf("%d",&n);
    for (int i=1;i<=n;++i) {
        while (x==pq.top()) pq.pop();
        x=pq.top();
        pq.pop();
        pq.push(x*2);
        pq.push(x*3);
        pq.push(x*5);
        pq.push(x*7);
    }
    printf("%lld\n",x);
    return 0;
}

