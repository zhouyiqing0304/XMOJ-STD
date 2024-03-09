#include<bits/stdc++.h>
using namespace std;
int a,b,c,n[110];
int main()
{
	freopen("balloon.in","r",stdin);
	freopen("balloon.out","w",stdout);
	cin>>a>>b>>c;
	n[a]++;
	n[b]++;
	n[c]++;
	int sum=0;
	for(int i=0;i<105;i++){
		if(n[i]!=0) sum++;
	}
	cout<<sum;
	return 0;
}
