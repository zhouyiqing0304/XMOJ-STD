#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,f=0,z=0;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>x;
        if(x==5)f++;
        if(x==0)z++;
    }
    if(z==0) cout<<-1;
    else if(f<9) cout<<0;
    else {
        int m=f/9;
        for(int i=1;i<=m;i++) cout<<555555555;
        for(int i=1;i<=z;i++)
            cout<<0;
    }
    return 0;
}
