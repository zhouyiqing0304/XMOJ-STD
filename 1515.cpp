#include<bits/stdc++.h>
using namespace std;
struct S{
	int val,nxt;
}s[200010];
int main()
{
	int n,m;
	while(scanf("%d%d",&n,&m)==2&&n&&m){
		for(int i=1;i<=n;i++)
			s[i].val=i,s[i].nxt=i+1;
		s[n].nxt=1;
		int head=1,pre=n;
		for(int i=1;i<n;i++){
			for(int j=1;j<m;j++){
				pre=head;
				head=s[head].nxt;
			}
			s[pre].nxt=s[head].nxt;
			head=s[head].nxt;
		}
		cout<<s[head].val<<endl;
	}
	return 0;
}
