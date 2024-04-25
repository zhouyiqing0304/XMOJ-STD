#include <bits/stdc++.h>
using namespace std;
int n, a[305], f[305][305], ans = 1e9;
int s[305];
int main()
{
    freopen("stone.in", "r", stdin);
    freopen("stone.out", "w", stdout);
    memset(f, 0x3f, sizeof(f));
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        f[i][i] = 0;
        s[i] = s[i - 1] + a[i];
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i + j - 1 <= n)
            {
                for (int k = j + 1; k <= j + i - 1; k++)
                {
                    f[j][j + i - 1] = min(f[j][j + i - 1], f[j][k - 1] + f[k][j + i - 1]);
                }
                f[j][j + i - 1] += s[j + i - 1] - s[j - 1];
            }
            else
            {
                for (int k = j + 1; k <= n; k++)
                {
                    f[j][j + i - 1 - n] = min(f[j][j + i - 1 - n], f[j][k - 1] + f[k][j + i - 1 - n]);
                }
                for (int k = 1; k <= j + i - 1 - n; k++)
                {
                    if (k == 1) f[j][j + i - 1 - n] = min(f[j][j + i - 1 - n], f[j][n] + f[k][j + i - 1 - n]);
                    else f[j][j + i - 1 - n] = min(f[j][j + i - 1 - n], f[j][k - 1] + f[k][j + i - 1 - n]);
                }
                f[j][j + i - 1 - n] += s[n] - s[j - 1] + s[j + i - 1 - n];
            }
            if (i == n)
            {
                if (i + j - 1 <= n) ans = min(ans, f[j][j + i - 1]);
                else ans = min(ans, f[j][j + i - 1 - n]);
            }
        }
    }
    cout << ans;
}
