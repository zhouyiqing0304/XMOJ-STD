#include <bits/stdc++.h>
using namespace std;

const int maxn=1050;
char s[maxn];
int n;

void build(int idx, int ns) {
	if(ns > idx) {
		build(idx, (idx+ns)/2); build((idx+ns+1)/2, ns);
	}

	int B=1, I=1;
	for(int i=0; i<=ns-idx; i++) {
		if(s[idx+i]=='1')
			B=0;
		else if(s[idx+i]=='0')
			I=0;
	}

	if(B)
		cout<<'B';
	else if(I)
		cout<<'I';
	else
		cout<<'F';
}

int main() {
	cin>>n>>s;
	build(0,(1<<n)-1);
	return 0;
}

