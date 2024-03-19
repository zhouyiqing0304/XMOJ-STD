#include<bits/stdc++.h>
using namespace std;
int a[360][360],v[360][360];
int main() {
	int n;
    cin>>n;
    for(int i=1;i<=n;i++) for (int j=1;j<=i;j++) cin>>a[i][j];
    int ans=0;
    for (int i=1;i<=n;i++) for (int j=1;j<=i;j++) {
            v[i][j]=max(v[i-1][j-1],v[i-1][j])+a[i][j];
            if (i==n) ans=max(ans,v[i][j]);
    }
    cout<<ans;
    return 0;
}
