#include<bits/stdc++.h>
using namespace std;
int n,m,a[100010],b[100010],x;
int a1(int x){
	int pos=lower_bound(b,b+n,x)-b;
	if(n-pos>=n) return -1;
	return n-pos+1;
}
int a2(int x){
	int pos=upper_bound(b,b+n,x)-b;
	if(n-pos>=n) return -1;
	return n-pos+1;
}
int a3(int x){
	int pos=upper_bound(b,b+n,x)-b;
	if(n-pos==0) return -1;
	if(n-pos>n) return -1;
	return n-pos;
}
int a4(int x){
	int pos=lower_bound(b,b+n,x)-b;
	if(n-pos==0) return -1;
	if(n-pos>n) return -1;
	return n-pos;
}
int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[n-i-1]=a[i];
	}
	for(int iii=0;iii<m;iii++){
		cin>>x;
		cout<<a1(x)<<' '<<a2(x)<<' '<<a3(x)<<' '<<a4(x)<<' ';
		if(a[0]>x) cout<<1;
		else cout<<-1;
		cout<<' ';
		if(a[n-1]<x) cout<<n;
		else cout<<-1;
		cout<<endl;
	}
	return 0; 
}
