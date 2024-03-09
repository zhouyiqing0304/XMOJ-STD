#include<bits/stdc++.h>
using namespace std;
const int Maxn=110;
int N,cx,cy;
long long h;
struct Node {
	int X,Y;
	long long H;
	bool operator < (const Node &rhs) const {return H>rhs.H;}//试试可不可以用
}A[Maxn];
long long abs(long long a) {
	if(a<0)return -a;
	return a;
}
int main() {
	freopen("b.in","r",stdin);
	freopen("b.out","w",stdout);
	cin>>N;
	for(int i=1;i<=N;i++) scanf("%lld %lld %lld",&A[i].X,&A[i].Y,&A[i].H);
	sort(A+1,A+N+1);
	for(cx=0;cx<=100;cx++) {
		bool flag=false;
		for(cy=0;cy<=100;cy++) {
			long long th=max(0LL,abs(A[1].X-cx)+abs(A[1].Y-cy)+A[1].H);
			if(th<1)break;
			for(int i=2;i<=N;i++)
				if(max(0LL,th-abs(A[i].X-cx)-abs(A[i].Y-cy))!=A[i].H) {
					th=-1;
					break;
				}
			if(th!=-1) {
				h=th,flag=true;
				break;
			}
		}
		if(flag) break;
	}
	printf("%d %d %lld",cx,cy,h);
	return 0;
}
