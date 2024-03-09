#include<bits/stdc++.h>
using namespace std;
int S[1024][1024],n,m,i,j,k,x,y,X=-1,Y=-1,s,d,a,b,c,oo,maxn=0,sum=0;
bool f;
int main()
{
	cin>>s>>d>>n;
	memset(S,0,sizeof(S));
	for(oo=0;oo<n;oo++){
		cin>>a>>b>>c;
		for(i=a-d;i<a+d+1;i++)
			for(j=b-d;j<b+d+1;j++){
				if(i<s&&j<s&&i>-1&&j>-1){
					S[i][j]+=c;
				}
			}
	}
	for(i=0;i<s;i++){
		for(j=0;j<s;j++){
			if(maxn<S[i][j]){
				sum=0;
				maxn=S[i][j];
			}
			if(maxn==S[i][j]) {
				sum++;
			}
		}
	}
	cout<<sum<<' '<<maxn<<endl;
	return 0;
}
