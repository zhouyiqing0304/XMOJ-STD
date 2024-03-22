#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=1000;
	int max=0;
	while(n<=9999)if((n/433+n%433)>max)max=(n/433+n%433),n++;else n++;
	cout<<max;
}
