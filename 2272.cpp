#include<bits/stdc++.h>
using namespace std;
const int N=110;
int n,v[N],lc[N],rs[N],root;
void p0(int x){
	cout<<x<<' ';
	int c=lc[x];
	while(c){
		p0(c);
		c=rs[c];
	}
}
int main(){
	cin>>n>>root;
	for(int i=1;i<=n;i++)
		cin>>v[i]>>lc[i]>>rs[i];
	int k,x,y;
	cin>>k;
	while(k--){
		cin>>x;
		p0(x);
		cout<<endl;
	}
	return 0;
}
