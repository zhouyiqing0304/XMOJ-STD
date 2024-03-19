#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,k,i=1,j=1;
	cin>>a>>b;
	cin>>k;
	for(int ii=0;ii<k;ii++){
		cout<<i<<' '<<j;
		i++,j++;
		if(i>a) i=1;
		if(j>b) j=1;
		cout<<endl;
	}
	return 0;
}
