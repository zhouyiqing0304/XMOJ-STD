#include<bits/stdc++.h>
using namespace std;
void print(int x,char from,char to)
{
	cout<<from<<"->"<<x<<"->"<<to<<endl;
}
void action(int n,char from,char to,char by)
{
	if(n==1){
		print(n,from,to);
		return;
	}
	action(n-1,from,by,to);
	print(n,from,to);
	action(n-1,by,to,from);
}
int main()
{
	int n;
	char a,b,c;
	cin>>n>>a>>b>>c;
	action(n,a,b,c);
	return 0;
}
