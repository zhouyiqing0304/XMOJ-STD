#include<bits/stdc++.h>
using namespace std;
int main()
{
	//input
	char sa[110],sb[110],sc[110],ch;
	cin>>sa>>sb>>sc;
	int la=strlen(sa),lb=strlen(sb),lc=strlen(sc);
	int i=0,j=0,k=0;
	//process
	ch=sa[0],i++;
	while(1)
	{
		if(ch=='a')
		{
			if(i==la){
				cout<<"A";
				return 0;
			}
			ch=sa[i++];
		}
		if(ch=='b')
		{
			if(j==lb){
				cout<<"B";
				return 0;
			}
			ch=sb[j++];
		}
		if(ch=='c')
		{
			if(k==lc){
				cout<<"C";
				return 0;
			}
			ch=sc[k++];
		}
	}
	return 0;
}
