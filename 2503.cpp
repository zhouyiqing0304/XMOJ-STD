#include<bits/stdc++.h>
using namespace std;
int main()
{
	int c;
	stringstream ss;
	cin>>c;
	ss<<c;
	string str;
	ss>>str;
	cout<<str.length()<<' ';
	cout<<c%10+c/10%10+c/100%10+c/1000;
}
