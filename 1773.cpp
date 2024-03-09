#include<bits/stdc++.h>
using namespace std;
struct metal
{
	double wei;
	double num;
	double typ;
}a[105];
bool cmp(struct metal a,struct metal b)
{
	return a.typ>b.typ;
}
int main()
{
	int k,w,s,i;
	double val;
	cin>>k;
	for(int x=k;x>0;x--){
		cin>>w>>s;
		for(i=1;i<=s;i++) cin>>a[i].wei>>a[i].num,a[i].typ=a[i].num/a[i].wei;
		sort(a+1,a+1+s,cmp);
		val=0;
		i=1;
		while(w&&i<=s)
		{
			if(w>=a[i].wei) w-=a[i].wei,val+=a[i++].num;
			else val+=a[i++].typ*w,w=0;
		}
		cout<<fixed<<setprecision(2)<<val<<endl;
	}
	return 0;
}
