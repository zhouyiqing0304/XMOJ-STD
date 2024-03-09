#include <iostream>
using namespace std;

int main() {
    int l, r, m;
    cin >> l >> r >> m;

    if (min(l, r) + m <= max(l, r)) {
        cout << 2 * (min(l, r) + m) << endl;
    } else {
        if (l < r) {
            m -= r - l;
            cout << 2 * r + (m / 2) * 2 << endl;
        } else {
            m -= l - r;
            cout << 2 * l + (m / 2) * 2 << endl;
        }
    }

    return 0;
}

