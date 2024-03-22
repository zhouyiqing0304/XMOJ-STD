#include<bits/stdc++.h>
using namespace std;
double pd(double x){
	return (x*x*x*x*x)-15*(x*x*x*x)+ 85*(x*x*x)- 225*(x*x)+ 274*x-121;
}
int main(){
	double l=1.5,r=2.4,mid,n;
	while(fabs(r-l)>0.0000001){
		mid=(l+r)/2,n=pd(mid);
		if(n>0) l=mid;
		else if(n<0)r=mid;
		else break;
	}
	cout<<fixed<<setprecision(6)<<mid;
	return 0;
}
