#include <bits/stdc++.h>
using namespace std;
long long n, a, b, c, d, e, f, g, h, m;
struct node {
    long long w, u;
}p[1500005];
bool cmp (node x, node y)
{
    if (x.u==y.u) return x.w<y.w;
    return x.u>y.u;
}
int main()
{
    cin >> n >> a >> b >> c >> d >> e >> f >> g >> h >> m;
    for (int i=0; i<3*n; i++)
        p[i].w = (a%d*i%d*i%d*i%d*i%d*i%d + (b%d*i%d*i%d+c%d)%d)%d,p[i].u = (e%h*i%h*i%h*i%h*i%h*i%h + (f%h*i%h*i%h*i%h+g%h)%h)%h;
    sort(p, p+3*n, cmp);
    long long ans=0;
    for (int i=0; i<n; i++) ans = (ans+p[i].w)%m;
    cout << ans << endl;
    return 0;
}
