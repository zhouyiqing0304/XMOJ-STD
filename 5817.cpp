#include<bits/stdc++.h>
using namespace std;
char c[128];
void outchar(char c[],int startAds,int lth){
	for(int i=0;i<lth;i++)
		cout<<c[i+startAds];
	cout<<endl;
}
int main()
{
	cin>>c;
	int n,k;
	n=strlen(c);
	for(int i=0;i<n;i++){
		k=n-i;//k=子串长度
		for(int j=0;j<=i;j++){
			outchar(c,j,k);
		}
	}
}
