#include <bits/stdc++.h>
using namespace std;
struct N{
    double l;
	double r;
}tp[1005];
int n,t,ans=2;
bool cmp(N p,N q){
    return p.l<q.l;
}
int main()
{
	cin>>n>>t;
    for(int i=0;i<n;i++){
        int x,a;
        cin>>x>>a;
        tp[i].l=x-0.5*a,tp[i].r=x+0.5*a;
    }
    sort(tp,tp+n,cmp);
    for(int i=1;i<n;i++)
        if(tp[i].l-tp[i-1].r>t) ans+=2;
        else if(tp[i].l-tp[i-1].r==t) ans++;
    cout<<ans;
    return 0;
}
