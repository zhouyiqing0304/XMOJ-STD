#include<bits/stdc++.h>
using namespace std;
int s,n,k;
void dfs(int d, int sum,int m) {
	if (d>=k){
		if(sum==n)s++;
		return;
	}
	for (int i = m;sum+(k-d)*i <= n;i++) dfs(d + 1, sum + i,i);
}
int main() {
	cin >> n >> k; dfs(0,0,1);
	cout << s;
}

