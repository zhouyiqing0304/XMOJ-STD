#include <bits/stdc++.h>
using namespace std;
int a[1000];
int main() {
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>a[i];
		for(int j=i;j>=0;j--){
			k--;if(k==0){
				cout<<a[i-j];
				return 0;
			}
		}
	}
}

