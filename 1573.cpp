#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, k, x, a[1005], f[1005];
signed main()
{
    cin >> n >> k;
    f[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        f[i] = max(f[i], a[i]);
        for (int j = i + 1; j <= n; j++)
            f[j] = max(f[j], f[j - i] + a[i] - k);
    }
    cout << f[n] << endl;
}
