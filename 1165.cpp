#include <iostream>
using namespace std;
bool isnormal(int a,int b)
{
    if((a<=140&&a>=90)&&(b>=60&&b<=90)) return true;
    else return false;
}
int t,sum,flag,a[111],b[111];
int main()
{
    cin>>t;
    for(int i=0;i<t;i++) cin>>a[i]>>b[i];
    for(int i=0;i<t;i++)
        if(isnormal(a[i],b[i])==true)
        {
            sum++;
            if(flag<sum)
                flag=sum;
        }
        else
            sum=0;
    cout<<flag;
    return 0;
}
