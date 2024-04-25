#include <bits/stdc++.h>
using namespace std;
int a[1000];
int main() {
	int n,s;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];s=0;
		for(int j=i-1;j>=0;j--)if(a[j]<a[i])s++;
		cout<<s<<' ';
	}
}

