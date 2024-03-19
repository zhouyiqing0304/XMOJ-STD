#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("circle.in","r",stdin);
	freopen("circle.out","w",stdout);
	int x,y;
	cin>>x>>y;
	double r=sqrt(x*x+y*y),d=2*r;
	if(ceil(d)==floor(d)) cout<<(int)(++d);
	else cout<<(int)ceil(d);
	return 0;
}
