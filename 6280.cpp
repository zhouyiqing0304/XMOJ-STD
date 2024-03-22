#include<bits/stdc++.h>
using namespace std;
long long k,n,d,e,m;
int main ( )
{
	freopen("decode.in","r",stdin);
	freopen("decode.out","w",stdout);
    cin>>k;
    for(int i=0;i<k;i++){
        cin>>e>>n>>d;
        m=e-n*d+2;
        double p=(m-1.0*sqrt(m*m-4*e))/2.0;
        long long p1=p,q=m-p;
        if (m*m-4*e<0||p1!=p||p1*q!=e) cout<<"NO"<<endl;
        else cout<<p1<<" "<<q<<endl;
    }
}

