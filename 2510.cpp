#include <bits/stdc++.h>
using namespace std;
int a[200010];
long long n,maxc=1,minc=1;
int main(){
    cin>>n;
    for(int i=0;i<n;++i)
        scanf("%d",&a[i]);
    sort(a,a+n);
    for(int i=1;i<n&&a[i]==a[0];++i) ++minc;
    for(int i=n-2;i>=0&&a[i]==a[n-1];--i) ++maxc;
    printf("%d ",a[n-1]-a[0]);
    if(a[n-1]==a[0])
        printf("%lld",n*(n-1)/2);
    else
        printf("%lld",minc*maxc);
    return 0;
}
