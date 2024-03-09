#include <bits/stdc++.h>
using namespace std;
const int N=110;
int n,root,lch[N],rch[N],f[110],v[110],ans[N];
void pre(int rt)
{
	ans[rt]+=ans[f[rt]]+v[rt];
    if (lch[rt]) pre(lch[rt]);
    if (rch[rt]) pre(rch[rt]);
}
int main()
{
	cin>>n>>root;
	for(int i=1;i<=n;i++){
		cin>>v[i]>>lch[i]>>rch[i];
		if(lch[i])
			f[lch[i]]=i;
		if(rch[i])
			f[rch[i]]=i;
	}
	pre(root);
	for(int i=1;i<=n;i++)cout<<ans[i]<<endl;
    return 0;
}
