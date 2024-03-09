#include <iostream>
using namespace std;
int n, v[110], fa[110];
bool p0(int x, int y)
{
    int f = fa[x];
    while (f)
    {
        if (f == y) return true;
        f = fa[f];
    }
    return false;
}
int p(int x, int y)
{
    if (p0(x, y)) return y;
    if (p0(y, x)) return x;
    return -1;
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> v[i] >> fa[i];
    int k, x, y;
    cin >> k;
    while (k--)
    {
        cin >> x >> y;
        cout << p(x, y) << endl;
    }
    return 0;
}

