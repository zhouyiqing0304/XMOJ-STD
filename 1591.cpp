#include<bits/stdc++.h>
using namespace std;
int main()
{
   for(int a=1; a<6; a++)
       for(int b=1; b<6; b++)
            for(int c=1; c<6; c++)
                for(int d=1; d<6; d++)
                        for(int e=1; e<6; e++)
                            if(d!=a&&d!=b&&d!=c&&e!=a&&e!=b&&e!=c&&e!=d&&e!=2&&e!=3&&c!=a&&c!=b&&a!=b)
                                if(a>=3^e==1&&b>=3^b==2&&c>=3^a==5&&d>=3^c!=1&&e>=3^d==1)
									cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e;
        return 0;
}
