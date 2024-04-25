#include<bits/stdc++.h>
using namespace std;
bool f[1010];int w[1010],v[1010],dp[1010];
int main(){
    int n,m;
    scanf("%d%d",&m,&n);
    for(int i=1;i<=n;++i){
        cin>>f[i]>>w[i]>>v[i];
    }
    for(int i=1;i<=n;++i){
        if(f[i]==1){
            for (int l = w[i]; l <= m; l++)
                if (dp[l - w[i]] + v[i] > dp[l]) dp[l] = dp[l - w[i]] + v[i]; 
        }else{
            for (int l = m; l >= w[i]; l--) dp[l] = max(dp[l], dp[l - w[i]] + v[i]);
        }
    }
    printf("%d",dp[m]);
    return 0;
}
