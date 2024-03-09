#include <bits/stdc++.h>
using namespace std;

const int MAX=1010;
const int INF=0x7FFFFFFF;

int n,p[MAX],ans;

int main() {
    cin>>n;
    for (int i=0;i<n;++i) cin>>p[i];
    sort(p,p+n);
    for (int i=0;i<n-1;++i) {
        int x=p[i]+p[i+1];
        ans+=x;
        int pos=n;
        if (i<n-2) {
            pos=lower_bound(p+i+2,p+n,x)-p;
            if (pos>i+2) memmove(p+i+1,p+i+2,sizeof(int)*(pos-i-2));
        }
        p[pos-1]=x;
    }
    cout<<ans<<endl;
}

