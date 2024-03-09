#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("number.in","r",stdin);
	freopen("number.out","w",stdout);
	char c;
	int sum=0;
	for(int i=0;i<8;i++){
		cin>>c;
		if(c=='1')sum++;
	}
	cout<<sum;
	return 0;
}
