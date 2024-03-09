#include<bits/stdc++.h>
using namespace std;
struct city{
	int year;
	int area;
	int freq;
	int i;
}a[100010],c[100010];
int b[100010];
bool cmp(city x,city y){
	return x.year<y.year;
}
int main()
{
	freopen("b.in","r",stdin);
	freopen("b.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>a[i].area>>a[i].year;
		a[i].freq=b[a[i].area],a[i].i=i,c[i]=a[i];
	}
	sort(a,a+m,cmp);
	for(int i=0;i<m;i++)
		b[a[i].area]++,a[i].freq=b[a[i].area],c[a[i].i].freq=a[i].freq;
	for(int i=0;i<m;i++){
		cout<<setfill('0')<<setw(6)<<c[i].area;
		cout<<setfill('0')<<setw(6)<<c[i].freq;
		cout<<endl;
	}
	return 0;
}

