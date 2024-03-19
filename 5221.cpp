#include<bits/stdc++.h>
using namespace std;
int main()
{
	double d,e;
	cin>>d>>e;
	if(d<=0||e<=0){
		cout<<"error"<<endl;
		return 0;
	}
	else cout<<fixed<<setprecision(2)<<d*e<<' '<<d+e+d+e<<endl;
	return 0;
}
