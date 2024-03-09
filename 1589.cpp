#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b,c,n,i=0;
	cin>>a>>b>>c>>n;
	for(i=n;i<32767;i++){
		if((i-a)%23==0&&(i-b)%28==0&&(i-c)%33==0){
			cout<<i-n;
			return 0;
		}
	}
	return 0;
}
