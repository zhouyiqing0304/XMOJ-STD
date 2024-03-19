#include<bits/stdc++.h>
using namespace std;
int main()
{
	double d;
	cin>>d;
	if(d<=0){
		cout<<"NO"<<endl;
		return 0;
	}
	else cout<<fixed<<setprecision(2)<<d*d<<endl;
	return 0;
}
