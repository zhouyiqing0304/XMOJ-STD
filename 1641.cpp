#include <iostream>
#include <string>
using namespace std;
bool judge(int* aa,int* bb,int len){
	if(aa[len]>0) return true;
	for(int i=len-1;i>=0;i--) if(aa[i]>bb[i]) return true;
		else if(aa[i]<bb[i]) return false;
	return true;
}
int a[10010],b[10010],ans[10010];
int main(){
	string a_s,b_s;
	int i,j,len_a,len_b,len;
	cin>>a_s>>b_s;
	len_a=a_s.length(),len_b=b_s.length(),len=len_a-len_b;
	for(i=0;i<len_a;i++) a[i]=a_s[len_a-1-i]-'0';
	for(i=0;i<len_b;i++) b[i]=b_s[len_b-1-i]-'0';
	for(i=len_a-len_b;i>=0;i--)
		while(judge(a+i,b,len_b))
			for(ans[i]++,j=0;j<=len_b-1;j++)
				if(a[i+j]<b[j])
					a[i+j+1]--,a[i+j]+=10,a[i+j]-=b[j];
				else a[i+j]-=b[j];
	while(a[len_a]==0&&len_a>0) len_a--;
	while(ans[len]==0&&len>0) len--;
	for(i=len;i>=0;i--) cout<<ans[i];
	if(len==-1) cout<<"0";
	cout<<endl;
	if(len<-1) cout<<"0";
	else for(i=len_a;i>=0;i--) cout<<a[i];
	return 0;
}
