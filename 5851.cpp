#include<bits/stdc++.h>
using namespace std;
int i,n;
int a,b,c,d,e;
int ia,ib,ic,id,ie;
int main()
{
	cin>>n;
	for(i=0;i<n;i++){
		cin>>ia>>ib>>ic>>id>>ie;
		a+=ia;b+=ib;c+=ic;d+=id;e+=ie;
	}
	e+=a*240+b*60+c*24+d*12;
	a=e/240;e%=240;
	b=e/60;e%=60;
	c=e/24;e%=24;
	d=e/12;e%=12;
	cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<endl;
	return 0;
}
