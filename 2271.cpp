#include <bits/stdc++.h>
using namespace std;
int n,v[110],lc[110],rs[110],root,k,x;
int f(int x)
{
    int ans=0;
    for (int i=lc[x];i;i=rs[i]) ans+=v[i];
    return ans;
}
int main()
{
    cin>>n>>root;
    for (int i=1;i<=n;++i) cin>>v[i]>>lc[i]>>rs[i];
	cin>>k;
    while (k--) {
        cin>>x;
        cout<<f(x)<<endl;
    }
    return 0;
}
