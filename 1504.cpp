#include <bits/stdc++.h>
using namespace std;
int n,v,vi,can[20010];
int main()
{
    cin>>n>>v;
    can[0]=true;
    for (int i=0;i<n;++i) {
        cin>>vi;
        for (int j=v;j>=vi;--j) if (can[j-vi]) can[j]=1;
    }
    for (int j=v;j>=0;--j)
        if (can[j]) {
            cout<<v-j<<endl;
            return 0;
        }
}
