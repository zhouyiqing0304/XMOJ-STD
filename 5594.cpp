#include <bits/stdc++.h>
using namespace std;
void f(int n, int divisor = 2) {
    if (n <= 1) return;
    if (n % divisor == 0) { cout << divisor << " "; f(n / divisor, divisor); }
	else f(n, divisor + 1);
}
int main() {
    int n;
    cin >> n;
    f(n);
    return 0;
}

