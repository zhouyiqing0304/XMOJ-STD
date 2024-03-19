#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int timeToFirstElevator = abs(a - 1);
    int timeToSecondElevator = abs(b - c) + c - 1;
    if (timeToFirstElevator < timeToSecondElevator) cout << 1;
    else if (timeToSecondElevator < timeToFirstElevator) cout << 2;
	else cout << 3;
    return 0;
}

