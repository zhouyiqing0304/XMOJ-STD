#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<queue>
#define N 1000003
#define LL long long 
using namespace std;
int n,m,ans; 
LL sum,tot;
priority_queue<LL> p;
struct data{
	LL w,t; bool flag;
	bool operator <(const data &a) const{
		return w+t<a.w+a.t;
	}
}a[N];
int main()
{
	scanf("%d%d%lld",&n,&m,&tot);
	for (int i=1;i<=n;i++) scanf("%lld%lld",&a[i].w,&a[i].t);
	for (int i=1;i<=m;i++) {
		int x; scanf("%d",&x);
		a[x].flag=1;
	}
	sort(a+1,a+n+1); 
	a[++n].w=0; a[n].t=tot; a[n].flag=1;
	bool pd=true;
	for (int i=1;i<=n;i++) {
		if (a[i].flag) {
			while (sum>a[i].t) {
				if (p.empty()) {
				  pd=false; break;
				}
				sum-=p.top(); p.pop(); ans--;
			}
			if (!pd) break;
			sum+=a[i].w; ans++;
		}
	    else {
	    	if (!p.empty()&&sum>a[i].t)
	    	 if (p.top()<a[i].w||sum-p.top()>a[i].t) continue;
	    	if (!p.empty()&&sum>a[i].t) sum-=p.top(),p.pop(),ans--;
			p.push(a[i].w); sum+=a[i].w; ans++;
		}
	}
	if (!pd) printf("Foolish SD!");
	else printf("%d\n",ans-1);
}
