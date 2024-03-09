#include<bits/stdc++.h>
using namespace std;
int a1,b1,c1,a2,b2,c2,s1,s2,n;
int up(int x){
	if(x==1) return 7;return x;
}
int score(int a,int b,int c){
	if(a==b&&b==c) return 3000+up(a)*10;
	else if(a==b) return 2000+up(a)*10+up(c);
	else if(a==c) return 2000+up(a)*10+up(b);
	else if(b==c) return 2000+up(b)*10+up(a);
	else return (a+b+c)*10;
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a1>>b1>>c1>>a2>>b2>>c2;
		s1=score(a1,b1,c1);
		s2=score(a2,b2,c2);
		if(s1>s2) cout<<"XiaoMing";
		else if(s1==s2) cout<<"Draw";
		else cout<<"XiaoWang";
		cout<<endl;
	}
	return 0;
}
