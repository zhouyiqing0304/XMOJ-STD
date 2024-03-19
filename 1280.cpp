#include<bits/stdc++.h>
using namespace std;
int n,m,a[100010];
bool fd(int x){
	int b=binary_search(a+1,a+n+1,x);
	if(b>0&&b<n) return true;
	return false;
} 
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	cin>>m;
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++){
		if(m-a[i]!=a[i]&&fd(m-a[i])==true){
			cout<<min(m-a[i],a[i])<<' '<<max(m-a[i],a[i]);
			return 0;
		}
	}
	cout<<"No";
	return 0;
}
