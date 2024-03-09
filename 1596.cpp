#include<bits/stdc++.h>
using namespace std;
int n,m,a[100010];
bool fd(int x){
	int b=binary_search(a+1,a+n+1,x);
	if(b>0&&b<=n) return true;
	return false;
} 
int main()
{
	cin>>n>>m;;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++)
		if(fd(m-a[i])==true){
			cout<<"yes";
			return 0;
		}
	cout<<"no";
	return 0;
}
