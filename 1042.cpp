#include<bits/stdc++.h>
using namespace std;
int k,n,cnt,sum;
int main()
{
	freopen("coin.in","r",stdin);
	freopen("coin.out","w",stdout);
	cin>>k;
	while(k--){
		n++;
		if(n>=cnt)cnt++,n=0;
		sum+=cnt;
	}
	cout<<sum;
	return 0;
}
