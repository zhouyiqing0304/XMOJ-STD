#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int w; // 包裹重量
    cin >> w;
    int ans = 8; // 总邮费，初始时为基础邮费8元
    char c; // 标记包裹是否需要加急服务
    cin.get(); // 此处抵消输入w后键入的空格或回车
    cin.get(c);
    if (w > 1000) // 如果包裹重量超过1000克
    {
        w = w - 1000; // 计算超重的重量
        ans = ans + 4 * (int) ceil(w / 500.0); // ans累加超重邮费
    }
    if (c == 'y') // 如果包裹需要加急服务
    {
        ans = ans + 5; // ans累加5
    }
    cout << ans;
    return 0;
}
