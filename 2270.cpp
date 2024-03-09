#include<bits/stdc++.h>
using namespace std;
const int N=110;
int n,v[N],lc[N],rs[N],root;
int d(int x){
	int ans=0;
	for(int i=lc[x];i;i=rs[i])ans++;
	return ans;
}
int main(){
	cin>>n>>root;
	for(int i=1;i<=n;i++)cin>>v[i]>>lc[i]>>rs[i];
	int k,x;
	cin>>k;
	while(k--){
		cin>>x;
		cout<<d(x)<<endl;
	}
	return 0;
}
