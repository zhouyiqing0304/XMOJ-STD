#include<bits/stdc++.h>
using namespace std;
int n,a[111],t,tmp=0,b[111],minn=1000000010;
int main()
{
	freopen("a.in","r",stdin);
	freopen("a.out","w",stdout);
	cin>>n>>t;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
		if(b[i]>t){
			i--;
			n--;
			continue;
		}
		if(a[i]<=minn)minn=a[i];
		tmp++;
	}
	if(tmp==0){
		cout<<"TLE";
		return 0;
	}
	cout<<minn;
	return 0;
}
