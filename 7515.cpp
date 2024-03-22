#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int n;
	cin>>n;
	int m=n/2;
	if(m%2) cout<<(int)m/2*((int)m/2+1);
	else cout<<m/2*m/2;
}
