#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x,i,j,k,sum=0;long long nm[128];
    cin>>n>>x;
    memset(nm,0,sizeof(nm));
    double y=x/3;
    for(i=0;i<n;i++) cin>>nm[i];
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            for(k=j+1;k<n;k++){
                if(x-(nm[i]+nm[j]+nm[k])<=y&&nm[i]+nm[j]+nm[k]<=x){
                    sum++;
                }
            }
        }
    }
    cout<<sum;
    return 0;
}
