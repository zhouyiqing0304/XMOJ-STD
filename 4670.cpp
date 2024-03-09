#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("guess.in","r",stdin);
	freopen("guess.out","w",stdout);
	int n,m[12][4],i,o=0,num[10],j,k,mun[10],aa=0,bb=0-0x7FFFFFFE;
	bool b;
	memset(num,-1,sizeof(num));
	memset(mun,0,sizeof(mun));
	string str[12];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>m[i][0];
		cin>>m[i][1];
		cin>>m[i][2];
		cin>>m[i][3];
		cin>>str[i];
		if(str[i]=="NO"){
			num[m[i][0]]=0;
			num[m[i][1]]=0;
			num[m[i][2]]=0;
			num[m[i][3]]=0;
		}
		else{
			if(num[m[i][0]]==-1) num[m[i][0]]=1;
			if(num[m[i][1]]==-1) num[m[i][1]]=1;
			if(num[m[i][2]]==-1) num[m[i][2]]=1;
			if(num[m[i][3]]==-1) num[m[i][3]]=1;
		}
	}
	o=0;
	for(i=0;i<10;i++){
		if(num[i]==0) o++;
	}
	if(o==9){
		for(i=0;i<10;i++) if(num[i]!=0) {
			cout<<i<<endl;
			return 0;
		}
	}
	for(i=0;i<10;i++){
		if(str[i]=="YES") {
			for(j=0;j<4;j++)
				if(num[m[i][j]]==1) mun[m[i][j]]++;
		}
	}
	for(i=0;i<10;i++){
		for(j=0;j<10;j++)
			if(mun[j]>bb){
				bb=mun[i];aa=i;
			}
	}
	cout<<aa<<endl;
	return 0;
}
