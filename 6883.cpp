#include<bits/stdc++.h>
using namespace std;
int q[11],sum,s;
int main()
{
	freopen("props.in","r",stdin);
	freopen("props.out","w",stdout);
	int n,m;
	cin>>n;
	for(int i=0;i<n*3;i++){
		cin>>m;
		q[m]++;
	}
	for(int i=1;i<=10;i++){
		if(q[i]>=2){
			q[i]-=2;
			sum++;
			i--;
		}
		else{
			s+=q[i];
		}
	}
	sum+=s/4;
	cout<<sum;
	return 0;
}
