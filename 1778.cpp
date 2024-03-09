#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	float sum,mx,a[1010];
	while(cin>>n){
		sum=0,mx=-1;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i],mx=max(mx,a[i]);
		}
		(mx>=sum-mx)?cout<<setprecision(1)<<fixed<<sum-mx<<endl:cout<<setprecision(1)<<fixed<<sum/2<<endl;
	}
	return 0;
}

