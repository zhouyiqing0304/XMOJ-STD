#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	for(int i=n/2;i>0;i--){
		if(n%i==0){
			cout<<i;
			return 0;
		}
	}
}
