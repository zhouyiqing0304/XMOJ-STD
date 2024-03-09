#include<bits/stdc++.h>
using namespace std;
struct Node{
	int val,nxt;
}s[200010];
int tot;
void add(int idx,int x){
	s[++tot].val=x,s[tot].nxt=s[idx].nxt,s[idx].nxt=tot;
}
int main()
{
	int n,x,rear=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		add(rear,x);
		rear=s[rear].nxt;
	}
	cin>>x;
	int p=0;
	while(s[p].nxt){
		if(s[s[p].nxt].val==x)
			s[p].nxt=s[s[p].nxt].nxt;
		else
			p=s[p].nxt;
	}
	p=s[0].nxt;
	while(p){
		cout<<s[p].val<<' ';
		p=s[p].nxt;
	}
	return 0;
}
