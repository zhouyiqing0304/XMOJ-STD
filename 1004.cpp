#include<bits/stdc++.h>
using namespace std;
int sqr[64][64];
int nxt(int n){
	if(n==9) return 1;
	else return ++n;
}
int main()
{
	int sz,n,x;
	cin>>n>>sz;
	x=sz;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			sqr[i][j]=x;
			x=nxt(x);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(sqr[j][i]==0) cout<<"  ";
			else cout<<sqr[j][i]<<' ';
		}
		cout<<endl;
	}
}
