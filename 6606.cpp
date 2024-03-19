#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
#define ll long long
#define PII pair<ll,ll>
using namespace std;
const int mx=1e6+5;
int n;
PII one,two;
PII ans;
struct node{
	int x,y,w,op;
}q[mx];
//期望得分 80~100 pts
void check(int x,int x2,int y,int y2) {
	ll res=0;
	for(int i=1;i<=n;i++) {
		if(x<=q[i].x&&q[i].x<=x2&&y<=q[i].y&&q[i].y<=y2) continue;
		if(x<=q[i].y&&q[i].y<=x2&&y<=q[i].x&&q[i].x<=y2) res+=q[i].w;
		else return;
	}
	if(res<ans.second) {
		ans.second=res;
		for(int i=1;i<=n;i++) {
			if(x<=q[i].x&&q[i].x<=x2&&y<=q[i].y&&q[i].y<=y2) q[i].op=0;
			else q[i].op=1;
		}
	}
} 
void solve() {
	int x(INF),y(INF),x2(0),y2(0); 
	for(int i=1;i<=n;i++) {
		scanf("%d%d%d",&q[i].x,&q[i].y,&q[i].w);
		if(q[i].x>q[i].y) {
			swap(q[i].x,q[i].y);
			q[i].op=1;
		}
		x=min(x,q[i].x);
		x2=max(x2,q[i].x);
		y=min(y,q[i].y);
		y2=max(y2,q[i].y); 
		if(q[i].op) {
			swap(q[i].x,q[i].y);
			q[i].op=0;
		}
	}
	ans.first=1ll*(x2-x)*2+(y2-y)*2;
	check(x,x2,y,y2);
	check(x,y2,y,x2);
	check(y,y2,x,x2);
	check(y,x2,x,y2);
}
int main() {
	scanf("%d",&n); ans=make_pair(INF,INF);
	solve();
	printf("%lld %lld\n",ans.first,ans.second);
	for(int i=1;i<=n;i++) printf("%d",q[i].op);
} 
