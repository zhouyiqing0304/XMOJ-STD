#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("bw.in","r",stdin);
	freopen("bw.out","w",stdout);
	int w,h;
	char c;
	cin>>w>>h>>c;
	string s1,s2;
	for(int i=0;i<w;i++)
		if(i%2==0) s1+=c;
		else s1+=(c=='W')?"B":"W";
	for(int i=0;i<w;i++)
		if(i%2==0) s2+=(c=='W')?"B":"W";
		else s2+=c;
	for(int i=0;i<h;i++){
		if(i%2==0)cout<<s1;
		else cout<<s2;
		cout<<endl;
	}
	return 0;
}
