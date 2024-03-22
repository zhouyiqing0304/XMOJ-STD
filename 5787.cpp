#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d;																																		string DRAW="DRAW",XIAOMING="XIAOMING",JIAJIA="JIAJIA";
	cin>>a>>b>>c>>d;
	bool x,y;
	if(a==b)x=1; else x=0;
	if(c==d)y=1; else y=0;
	if(x==y) cout<<DRAW;
	else if(x==1&&y==0) cout<<XIAOMING;
	else cout<<JIAJIA;
	return 0;
}
