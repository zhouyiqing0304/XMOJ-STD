#include<bits/stdc++.h>
using namespace std;
const int N=110;
int n,v[N],lc[N],rs[N],root;
bool p0(int x,int y){
	if(x==y) return true;
	int c=lc[x];
	while(c){
		if(p0(c,y)) return true;
		c=rs[c];
	}
	return false;
}
int p(int x,int y)
{
	if(p0(x,y)) return x;
	if(p0(y,x)) return y;
	return -1;
}
int main(){
	cin>>n>>root;
	for(int i=1;i<=n;i++)
		cin>>v[i]>>lc[i]>>rs[i];
	int k,x,y;
	cin>>k;
	while(k--){
		cin>>x>>y;
		cout<<p(x,y)<<endl;
	}
	return 0;
}
