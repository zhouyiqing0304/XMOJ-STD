//2017 7
#include<bits/stdc++.h>
using namespace std;
int a,rq[13][32],n,yf[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
    cin>>n>>a;
    if((n%100!=0&&n%4==0)||(n%400==0))yf[2]=29;
    for(int i=1;i<=12;++i) for(int j=1;j<=yf[i];++j)
        {
            rq[i][j]=a++;
            if(a==8)a=1;
            if(j==13&&rq[i][j]==5)cout<<i<<endl;
        }
    return 0;
}
