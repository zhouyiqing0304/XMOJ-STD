#include <bits/stdc++.h>
const int N = 130;
using namespace std;
long long x[25], y[25], f[N][N], d, n, maxn, k[25], tim;
bool in_edge (int i, int j, int t) {
    if ((x[t] <= i + d && x[t] >= i - d)&&(y[t] <= j + d && y[t] >= j - d)) return 1;
    return 0;
}
int main () {
    cin >> d >> n;
    for (int i = 1; i <= n; i++) cin >> x[i] >> y[i] >> k[i];
    for (int i = 0; i <= 128; i++) for (int j = 0; j <= 128; j++) {
            for (int t = 1; t <= n; t++) if (in_edge (i, j, t)) f[i][j] += k[t];
            if (maxn < f[i][j]) {
                tim = 1;
                maxn = f[i][j];
            }
            else if (maxn == f[i][j]){
                tim++;
            }
        }
    cout << tim << " "<< maxn << endl;
    return 0;
}

