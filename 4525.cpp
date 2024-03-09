#include<bits/stdc++.h>
using namespace std;
bool isp(int n){
	if(n<2) return false;
	for(int i=2;i<=n/2;i++) if(n%i==0) return false;
	return true;
}
int fgl(int n){
	int m=0;
	while(n!=0){
		m*=10;
		m+=n%10;
		n/=10;
	}
	return m;
}
int main()
{
	for(int i=0;i<100000;i++){
		if(isp(fgl(i))&&isp(i)) cout<<i<<' ';
	}
	return 0;
}
