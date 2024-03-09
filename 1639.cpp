//减法
#include<bits/stdc++.h>
using namespace std;
int a[10010],b[10010],c[10010],ls,lt;
void read(int x[],int &len){
	char s[10010];
	cin>>s;
	len=strlen(s);
	for(int i=0,j=len-1;i<len;i++,j--) x[i]=s[j]-48;
}
int main()
{
	read(a,ls);read(b,lt);
	int l=max(ls,lt);
	for(int i=0;i<l;i++) c[i]=a[i]-b[i];
	for(int i=0;i<l;i++) if(c[i]<0) c[i]+=10,c[i+1]--;
	while(l>1&&c[l-1]==0) l--;
	for(int i=l-1;i>=0;i--) cout<<c[i];
}
