#include<bits/stdc++.h>
using namespace std;
bool f(int n)
{
	for(;n>0;n/=10){
		if(n%10==2||n%10==4)return true;
	}
	return false;
}
int main()
{
	int n=0;
	for(int i=0;i<2018;i++){
		if(f(i))n++;
	}
	cout<<n;
}
