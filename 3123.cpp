#include <bits/stdc++.h>
using namespace std;
long long n,ans,t1[100005],sum,Price[100005];
struct BY{
	long long by,price,t;
}T[100005];
int main(){
	freopen("transfer.in","r",stdin);
	freopen("transfer.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>T[i].by>>T[i].price>>T[i].t;
		if(T[i].by==0){
			ans+=T[i].price;
			sum++;
			t1[sum]=T[i].t;
			Price[sum]=T[i].price;
		}else{
			long long f=-1;
			for(long long j=sum;T[i].t-t1[j]<=45 && j>=1;j--)if(Price[j]>=T[i].price) f=j;
			if(f==-1) ans+=T[i].price; else Price[f]=0;
		}
	}
	cout<<ans;
	return 0;
}
