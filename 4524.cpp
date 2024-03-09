#include<bits/stdc++.h>
using namespace std;
bool isp(int n){
	if(n<2) return false;
	for(int i=2;i<=n/2;i++) if(n%i==0) return false;
	return true;
}
int hw(int n){
	int j=n,k=0; 
	while(j>0){
		j/=10;
		k++;
	}
	for(int i=0;i<k;i++){
		if(n/(int)pow(10,i)%10!=n/(int)pow(10,k-i-1)%10){
			return false;
		}
	}
	return true;
}
int main()
{
	for(int i=0;i<100000;i++){
		if(isp(i)&&hw(i)) cout<<i<<' ';
	}
	return 0;
}
