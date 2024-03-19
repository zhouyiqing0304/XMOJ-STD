#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    int floor = 1; // 从第一楼开始
    int room = 2; // 第一楼的房间门牌号范围是 1 到 2

    while (n > room) {
        room += x; // 每层的房间数为 x
        floor++; // 楼层数加一
    }

    cout << floor << endl;
    return 0;
}

