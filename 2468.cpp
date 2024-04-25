#include<bits/stdc++.h>
using namespace std;
char a[100][100];
int ans;
void dfs(int x,int y){
	ans++;
	if(a[x+1][y]=='.'){
		a[x+1][y]='#';
		dfs(x+1,y);
	}
	if(a[x][y+1]=='.'){
		a[x][y+1]='#';
		dfs(x,y+1);
	}
	if(a[x-1][y]=='.'){
		a[x-1][y]='#';
		dfs(x-1,y);
	}
	if(a[x][y-1]=='.'){
		a[x][y-1]='#';
		dfs(x,y-1);
	}
	return;
}
int main(){
	int n,m,x,y;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=m;j++){
		cin>>a[i][j];
		if(a[i][j]=='@')x=i,y=j;
	}
	dfs(x,y);
	cout<<ans<<endl;
	return 0;
}
