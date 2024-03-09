#include<bits/stdc++.h>
using namespace std;
long long c[100010];
int main(){
	freopen("fight.in","r",stdin);
	freopen("fight.out","w",stdout);
	long long n,m,p1,s1,s2,s=0,ans=1e18,pos=-1;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>c[i];
	cin>>m>>p1>>s1>>s2;
	c[p1]+=s1;
	for(int i=1;i<=n;i++) s+=c[i]*(i-m);
	for(int i=1;i<=n;i++){
		long long x=abs(s+s2*(i-m));
		if(x<ans)ans=x,pos=i;
	}
	cout<<pos;
	return 0;
}
