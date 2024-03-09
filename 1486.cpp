#include<bits/stdc++.h>
using namespace std;
struct window{
	int l,r,t,b;
};
int main()
{
	window aero,acrylic,memery;
	cin>>aero.l>>aero.r>>aero.t>>aero.b;
	cin>>acrylic.l>>acrylic.r>>acrylic.t>>acrylic.b;
	int ans=0;
	memery.l=max(aero.l,acrylic.l);
	memery.r=min(aero.r,acrylic.r);
	memery.t=max(aero.t,acrylic.t);
	memery.b=min(aero.b,acrylic.b);
	if(memery.l<memery.r&&memery.t<memery.b) ans=(memery.r-memery.l)*(memery.b-memery.t);
	cout<<ans<<endl;
	return 0;
}
