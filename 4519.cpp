#include<bits/stdc++.h>
using namespace std;

bool isR(int year);
int main()
{
    int year,month;
    cin >> year >> month;
    int a[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int day=0;
    for(int i=1900;i<year;i++)
    {
        if(isR(i))
            day+=366;
        else
            day+=365;
    }
    if(isR(year))
        a[1]=29;
    for(int i=0;i<month-1;i++)
    {
        day+=a[i];  
    }

    int ans;
    if(day%7==0)
        ans=1;
    else{
        ans=day%7+1;
    }

    printf("Sun Mon Tue Wed Thu Fri Sat\n");
    int temp = a[month-1];
    for(int i=0;i<ans%7;i++)
    {
        printf("    ");     
    }
    int cnt=1;
    while(temp)
    {
        int res = ans%7+cnt;
        if(res%7 == 0)
            printf("%3d\n",cnt);
        else
            printf("%3d ",cnt);
        cnt++;
        temp--;
    }
    return 0;
}

bool isR(int year)
{
    if(year%4==0 && year%100!=0 || year%400==0)
        return true;
    return false;
}
