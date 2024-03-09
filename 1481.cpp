#include<bits/stdc++.h>
using namespace std; 
int height[1000005];
int n,m;
bool check(int h)
{
    long long s=0;
    for (int i=1;i<=n;++i)
        if (height[i]>h)
            s+=height[i]-h;
    return s>=m;
} 
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;++i)
        cin>>height[i];
    int l=0,r=1000000000;
    while (l<=r) {
        int mid=(l+r)/2;
        if (check(mid)) l=mid+1;
        else r=mid-1;
    }
    cout<<r;
    return 0;
}
