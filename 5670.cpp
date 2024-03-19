#include <iostream>
using namespace std;

int main() {
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;

    bool canFeedAllPets = false;

    if (a >= x && b >= y) {
        canFeedAllPets = true;
    } else {
        int needUniversalFood = max(0, x - a) + max(0, y - b);
        if (c >= needUniversalFood) {
            canFeedAllPets = true;
        }
    }

    if (canFeedAllPets) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

