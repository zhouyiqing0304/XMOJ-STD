#include <bits/stdc++.h>
using namespace std;
int n,v[110],fa[110],k,x;
int f(int x)
{
    int ans=0;
    for (int i=1;i<=n;++i) if (fa[i]==x) ans+=v[i];
    return ans;
}
int main()
{
    cin>>n;
    for (int i=1;i<=n;++i) cin>>v[i]>>fa[i];
    cin>>k;
    while (k--) {
	cin>>x;
        cout<<f(x)<<endl;
    }
    return 0;
}
