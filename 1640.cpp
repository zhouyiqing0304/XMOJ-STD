//乘法
#include<bits/stdc++.h>
using namespace std;
int a[10010],b[10010],c[32767],lena,lenb,t;
void read(int x[],int &len){
	char s[10010];cin>>s,len=strlen(s);
	for(int i=0,j=len-1;i<len;i++,j--) x[i]=s[j]-48;
}
int main()
{
	read(a,lena),read(b,lenb);
	for(int i=0;i<min(lena,lenb);i++) for(int j=0;j<max(lena,lenb);j++){
			if(lena>lenb)  c[i+j]+=a[j]*b[i];
			else c[i+j]+=a[i]*b[j];
			if(c[i+j]>=10) c[i+j+1]+=c[i+j]/10,c[i+j]%=10;
		}
	for(int i=lena+lenb;c[i]==0;i--)t=i;
	for(int i=t-1;i>=0;i--) cout<<c[i];
	return 0;
}
