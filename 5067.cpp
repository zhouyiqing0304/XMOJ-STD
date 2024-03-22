#include<iostream>
using namespace std;
int main()
{
    long long n,m;
    cin>>n>>m;
    long long s=2*m;
    for(long long i=m+1;i<=n;i++) s+=i;
    cout<<s;
	return 0;
}
