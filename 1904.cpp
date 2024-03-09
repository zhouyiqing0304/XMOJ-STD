#include<bits/stdc++.h>
using namespace std;
int n[1000010];
void hyxb(long long len){
	for(int i=0;i<len;i++) cin>>n[i]; 
	long long m[1024],sum=0;
	memset(m,0,sizeof(m));
	for(int i=0;i<len;i++)
		m[n[i]]++;
	for(int i=0;i<1001;i++){
		if(m[i]!=0) sum++;
	}
	cout<<sum;
}
void bl(long long len){
	long long sum=0;
	bool f;
	for(int i=0;i<len;i++) {
		cin>>n[i];
		f=false;
		for(long long j=0;j<i;j++){
			if(n[j]==n[i]){
				f=true;
			}
		}
		if(f==false) sum++;
	}
	cout<<sum;
}
int main(){
	freopen("numbers.in","r",stdin);
	freopen("numbers.out","w",stdout);
	long long nn;
	cin>>nn;
	if(nn>1000){
		hyxb(nn);
	}
	else {
		bl(nn);
	}
	return 0;
} 
