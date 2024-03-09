#include<bits/stdc++.h>
using namespace std;
int n,m,a[100010],x;
int a1(int x){
	int pos=upper_bound(a,a+n,x)-a;
	if(pos>=n) return -1;
	return pos+1;
}
int a2(int x){
	int pos=lower_bound(a,a+n,x)-a;
	if(pos>=n) return -1;
	return pos+1;
}
int a3(int x){
	int pos=lower_bound(a,a+n,x)-a;
	if(pos==0) return -1;
	if(pos>n) return -1;
	return pos;
}
int a4(int x){
	int pos=upper_bound(a,a+n,x)-a;
	if(pos==0) return -1;
	if(pos>n) return -1;
	return pos;
}
int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int iii=0;iii<m;iii++){
		cin>>x;
		cout<<a1(x)<<' '<<a2(x)<<' '<<a3(x)<<' '<<a4(x)<<' ';
		if(x<=a[0]) cout<<-1;
		else cout<<1;
		cout<<' ';
		if(x>=a[n-1]) cout<<-1;
		else cout<<n;
		cout<<endl;
	}
	return 0; 
}
