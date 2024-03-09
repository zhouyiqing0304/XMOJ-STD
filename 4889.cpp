#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("candy.in","r",stdin);
	freopen("candy.out","w",stdout);
    int n,L,R;
    cin>>n>>L>>R;
    if(R/n>L/n) cout<<--n<<endl;
    else cout<<R%n<<endl;
    return 0;
}

