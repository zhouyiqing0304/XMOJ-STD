#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n[12];cin>>n[0]>>n[1]>>n[2]>>n[3]>>n[4]>>n[5];
	int i,j,k,s=n[0]+n[1]+n[2]+n[3]+n[4]+n[5];
	for(i=0;i<6;i++){
	for(j=0;j<6;j++){if(i==j)continue;
	for(k=0;k<6;k++){if(j==k)continue;if(i==k)continue;
	if(n[i]+n[j]+n[k]==s-n[i]-n[j]-n[k]){
	cout<<"YES";
	return 0;
	}
	}
	}
	}
	cout<<"NO";
	return 0;
}
