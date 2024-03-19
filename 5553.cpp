#include<bits/stdc++.h>
using namespace std;
struct Node{
	int val,nxt;
} s[20010];
int n,m,tot,p,x;
int insert_node(int p,int x){
	s[++tot].val=x,s[tot].nxt=s[p].nxt,s[p].nxt=tot;
	return tot;
}
int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>x;
		p=insert_node(p,x);
	}
	p=0;
	for(int i=0;i<m;i++){
		cin>>x;
		while(s[p].nxt&&s[s[p].nxt].val<x) p=s[p].nxt;
		p=insert_node(p,x);
	}
	p=0;
	while(s[p].nxt){
		cout<<s[s[p].nxt].val<<' ';
		p=s[p].nxt;
	}
	return 0;
}
