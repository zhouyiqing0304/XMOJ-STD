#include <iostream>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int total_drink = k * l;
    int total_lime = c * d;
    int total_salt = p;
    int min_drink = total_drink / (n * nl);
    int min_lime = total_lime / n;
    int min_salt = total_salt / (n * np);
    int max_toast = min(min_drink, min_lime);
    max_toast = min(max_toast, min_salt);
    cout << max_toast << endl;
    return 0;
}

