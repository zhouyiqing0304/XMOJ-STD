#include<bits/stdc++.h>
using namespace std;
bool isp(int a,int b)//注意a是b的平方根+1 
{
	if(a==1||b==1) return false;
	if(b<2) return true;
	if(a%b==0) return false;
	return isp(a,b-1);
}
int main()
{
	unsigned long long a,i;
	cin>>a;
	cout<<a<<'=';
	for(i=2;i<=a;i++){
		if(isp(a,a)){
			cout<<a<<endl;
			return 0;
		}
		if(i==a) {
			cout<<a<<endl;
			return 0;
		}
		if(a%i==0){
			cout<<i<<'*';
			a/=i;
			i--;
		}
	}
	return 0;
}
