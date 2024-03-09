#include<bits/stdc++.h>
using namespace std;
bool noSm(int n)
{
	int ge=n%10,shi=n/10%10,bai=n/100%10,qian=n/1000%10;
	if(ge!=shi&&ge!=bai&&ge!=qian&&shi!=bai&&shi!=qian&&bai!=qian) return false;
	return true;
}
int main()
{
	int n;
	cin>>n;
	for(;noSm(++n););
	cout<<n;
	return 0;
}
