#include <bits/stdc++.h>
using namespace std;

int p[10005][4];

int main() {
    int n, a, b, g, k, tx, ty;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> p[i][0] >> p[i][1] >> p[i][2] >> p[i][3];
        p[i][2] += p[i][0];
        p[i][3] += p[i][1];
    }
    cin >> tx >> ty;
    bool ok = false;
    for (int i = n; i >= 1; i--) {
        if (tx >= p[i][0] && tx <= p[i][2] && ty >= p[i][1] && ty <= p[i][3]) {
            ok = true;
            cout << i << endl;
            break;
        }
    }
    if (!ok)
        cout << -1 << endl;
}

