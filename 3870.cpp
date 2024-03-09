#include <bits/stdc++.h>
using namespace std;
int main() {
    freopen("power.in","r",stdin);
    freopen("power.out","w",stdout);
    long long n;
    cin>>n;
    if (1==n%2) {
        cout<<"-1\n";
        return 0;
    }
    long long t;
    while (n>0) {
        for (int i=32; i>=0; i--) {
            t=pow(2, i);
            if (t<=n) {
                cout<<t<<" ";
                n-=t;
                break;
            }
        }
 
    }
    cout<<"\n";
 
    return 0;
}
