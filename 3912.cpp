#include <bits/stdc++.h>
using namespace std;
int n,h[1010],ans=1;
double t,a,minx=1e100;
int main() {
    freopen("a.in","r",stdin);
    freopen("a.out","w",stdout);

    cin>>n>>t>>a;
    for (int i=1;i<=n;++i) cin>>h[i];
    for (int i=1;i<=n;++i) {
        double tmp=t-h[i]*0.006;
        double diff=fabs(tmp-a);
        if (diff<minx) {
            ans=i;
            minx=diff;
        }
    }
    cout<<ans<<endl;
    return 0;
}
