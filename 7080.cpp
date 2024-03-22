#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b,c,d;
	cin>>a>>b>>c>>d;
	for(int i=1;i<=a;i++) if(b*i+a<=c*d*i){
		cout<<i;
		return 0;
	}
	cout<<-1;
	return 0;
}
