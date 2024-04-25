#include<bits/stdc++.h>
using namespace std;
int n,t,a[100],f[100];
void dfs(int k){
	if(t)return;
	if(k>n){
		for(int i=1;i<=n;i++)cout<<a[i]<<' ';
		t=1;
		return;
	}
	if(a[k]){
		dfs(k+1);
		return;
	}
	for(int i=n/2;i>0;i--)
		if(f[i]==0&&a[k+i+1]==0&&k+i+1<=n)
			f[i]=1,a[k]=a[k+i+1]=i,dfs(k+1),a[k]=a[k+i+1]=f[i]=0;
}
int main(){
	cin>>n;n*=2;
	dfs(1);
	return 0;
}
