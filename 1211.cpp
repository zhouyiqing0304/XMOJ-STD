#include<bits/stdc++.h>
using namespace std;
int n,q,d[1010],t,x,p[10];
int main()
{
	freopen("librarian.in","r",stdin);
	freopen("librarian.out","w",stdout);
	for(int i=0,j=1;i<10;i++,j*=10)p[i]=j;
	cin>>n>>q;
	for(int i=1;i<=n;i++)cin>>d[i];
	sort(d+1,d+(n+1));
	for(int i=1;i<=q;i++){
		cin>>x>>t;
		int ans=-1;
		for(int j=1;j<=n;j++){
			if(d[j]<t) continue;
			if(d[j]%p[x]==t){
				ans=d[j];
				break;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
