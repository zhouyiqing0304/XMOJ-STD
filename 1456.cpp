#include<bits/stdc++.h>
using namespace std;

bool isp(int a,int b)//注意a是b的平方根+1
{
	if(b<2) return true;
	if(a%b==0) return false;
	return isp(a,b-1);
}

int main()
{
	long long m/*范围*/,i;
	cin>>m;//输入范围
	if(m<5) cout<<"empty"<<endl;
	for(i=3;i<=m-2;i+=2){
		if(isp(i,sqrt(i)+1)==true&&isp(i+2,sqrt(i+2)+1)==true) cout<<i<<' '<<i+2<<endl;
	}
	return 0;
}
