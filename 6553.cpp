#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define lowbit(x) x&(-x)
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll, ll> pll;
const int N = 2e5+5;
const ll mod = 1e9+7;
const int INF = 0x3f3f3f3f;
const double eps =1e-9;
const double PI=acos(-1.0);
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
const int exdir[4][2]={1,1,1,-1,-1,1,-1,-1};
ll qpow(ll x,ll y){
    ll ans=1,t=x;
    while(y>0){
        if(y&1)ans*=t,ans%=mod;
        t*=t,t%=mod;
        y>>=1;
    }
    return ans%mod;
}
pii a[N];
bool cmp(pii x,pii y){
    return x.se<y.se;
}
void solve(){
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i].fi>>a[i].se;
    }
    sort(a+1,a+1+n,cmp);
    priority_queue<int>q;
    int now=0,ans=0;
    for(int i=1;i<=n;i++){
        if(now+a[i].fi<=a[i].se)ans++,q.push(a[i].fi),now+=a[i].fi;
        else {
            int k=q.top();
            if(k>a[i].fi){
                q.pop();
                q.push(a[i].fi);
                now-=(k-a[i].fi);
            }
        }
    }
    cout<<ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    solve();
    return 0;
}
