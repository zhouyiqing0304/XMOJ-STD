#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,n,i,as=0,bs=0,cs=0;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a>>b>>c;
		as+=a;bs+=b;cs+=c;
	}
	cout<<as<<' '<<bs<<' '<<cs<<' '<<as+bs+cs;
	return 0;
}
