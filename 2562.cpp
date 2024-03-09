#include<bits/stdc++.h>
using namespace std;
int F1(){
	int n,a[128],sum=0;
	memset(a,0,sizeof(a));
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		for(int j=i-1;j>=0;j--){
			if(a[j]>a[i])sum++,a[j]=-1;
		}
	}
	return sum;
}
int main()
{
	int t=0;
	cin>>t;
	for(int i=0;i<t;i++)
		cout<<F1()<<endl;
	return 0;
}
