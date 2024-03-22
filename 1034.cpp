#include<bits/stdc++.h>
using namespace std;
int gs, jg,sum = 0, minn =2*1000000000,n;
int main(){
freopen("pencil.in","r",stdin);
freopen("pencil.out","w",stdout);
    int n;
    cin >> n;
    for (int i = 0; i < 3; i++)
    {
        cin >> gs >> jg;
        if(n % gs != 0) sum = ((n / gs) + 1) * jg;
        else sum = (n / gs) * jg;
        if(sum < minn) minn = sum;
    }
    cout << minn;
    return 0;
}
