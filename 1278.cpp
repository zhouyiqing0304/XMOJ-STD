#include <bits/stdc++.h>
using namespace std;
const double PI = 3.141592653589793;
int n, f;
double t[10001];
bool g(double r) {
    int s = 0;
    for (int i = 1; i <= n; i++) {
        s += int(t[i] / r);
    }
    return s >= f;
}
int main() {
    double l = 0, r = 0, tmp;
    cin >> n >> f;
    f++;
    for (int i = 1; i <= n; i++) {
        cin >> tmp;
        t[i] = tmp * tmp * PI;
        if (t[i] > r) r = t[i];
    }
    while (r - l > 1e-6) {
        double m = (l + r) / 2;
        if (g(m)) l = m;
        else r = m;
    }
    printf("%.3lf\n", l);
    return 0;
}

