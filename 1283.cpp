#include <bits/stdc++.h>
using namespace std;
int L,N,M;
int sz[50010];
bool judge(int mid){
    int m=0,b=sz[0];
    for (int i = 1; i <= N+1; ++i)
        if (sz[i]-b<mid) m++;
		else b=sz[i];
    return (m <= M);
}
int main(){

    cin>>L>>N>>M;
    int l=0,r=L+1,mid;
    for (int i = 1; i <= N; ++i) cin>>sz[i];
    sz[N+1]=L;
    while (l<r){
        mid=(l+r+1)/2;
        if(judge(mid)) l=mid;
    	else r=mid-1;
    }
    cout<<l;
    return 0;
}
