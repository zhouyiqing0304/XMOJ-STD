#include<iostream>
using namespace std;
int n,year,month1,month2,month[21]={0,31,28,31,30,31,30,31,31,30,31,30,31},rmonth[21]={0,31,29,31,30,31,30,31,31,30,31,30,31},flag=1;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>year>>month1>>month2;
        if(month1>month2)swap(month1,month2);
        if((year%4==0&&year%100!=0)||year%400==0)
        {
            int begin=1;
            for(int j=month1;j<=month2-1;j++)
                for(int k=1;k<=rmonth[j];k++)
                    if(begin==7) begin=1;
                    else begin++;
            if(begin==1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else
        {
            int begin=1;
            for(int j=month1;j<=month2-1;j++)
                for(int k=1;k<=month[j];k++)
                    if(begin==7) begin=1;
                    else begin++;
            if(begin==1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}
