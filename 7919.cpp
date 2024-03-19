#include<bits/stdc++.h>
using namespace std;
char s[1010],c;
int main()
{
	freopen("letter.in","r",stdin);
	freopen("letter.out","w",stdout);
	int n,ans=0;
	cin>>n;
	for(int i=0;i<n;i++)cin>>s[i];
	for(int i=0;i<n;i++){
		cin>>c;
		if(s[i]!=c)ans++;
	}
	cout<<ans;
	return 0;
}
