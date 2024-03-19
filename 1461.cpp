#include<bits/stdc++.h>
using namespace std;
char a[105];
double v(){
	cin>>a;
	switch(a[0]){
		case '+': return v()+v();
		case '-': return v()-v();
		case '*': return v()*v();
		case '/': return v()/v();
	}
	return atof(a);
}
int main()
{
	cout<<fixed<<setprecision(6)<<v();
	return 0;
}
