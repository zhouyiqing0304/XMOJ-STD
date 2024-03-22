#include<bits/stdc++.h>
using namespace std;
struct human{
	int no=0;//编号
	int tm=0;//时间
};
bool judge(human A,human B)
{
	if(A.tm==B.tm)return A.no>B.no;
	return A.tm > B.tm;
}
int main()
{
	int n;
	double sum=0;
	human a[1010];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].tm;
		a[i].no=i;
	}
	sort(a+1,a+n+1,judge);
	for(int i=n;i>0;i--){
		cout<<a[i].no<<' ';
		sum+=(i-1)*a[i].tm;
	}
	cout<<endl<<fixed<<setprecision(2)<<sum/n;
	return 0;
}
