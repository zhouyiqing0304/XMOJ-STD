#include<bits/stdc++.h>
using namespace std;
int f(int x,int n){
	if(x>n) return 0; if(x==n||n==1) return 1;
	if(n%x==0)return f(x,n/x)+f(x+1,n);
	return f(x+1,n);
}
int main(){
	int n,s;
	cin>>s;
	for(int i=1;i<=s;i++){
		cin>>n;
		cout<<f(2,n)<<endl;
	}
	return 0;
}
