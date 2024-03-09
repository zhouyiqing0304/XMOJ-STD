#include<bits/stdc++.h>
using namespace std;
int a[11];
bool isOK(int x){
	x*=x;
	memset(a,0,sizeof(a));
	for(int i=0;x>0;i++){
		a[i]=x%10;
		x/=10;
	}
	sort(a,a+10);
	for(int i=1;i<=10;i++){
		if(a[i]==a[i-1])return false;
	}
	return true;
}
int main()
{
	int x;
	for(int i=11111;i<31427;i++){
		if(isOK(i))cout<<i<<endl;
	}
	return 0;
}
