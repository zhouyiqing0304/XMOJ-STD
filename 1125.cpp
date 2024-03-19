#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 3 == 0) // 如果n能被3整除
    {
        cout << 3 << " "; // 输出3和一个空格
    }
    if (n % 5 == 0) // 如果n能被5整除
    {
        cout << 5 << " "; // 输出5和一个空格
    }
    if (n % 7 == 0) // 如果n能被7整除
    {
        cout << 7; // 输出7
    }    
    if (n % 3 != 0 && n % 5 != 0 && n % 7 != 0) // 如果n不能被3、5、7中的任意一个数整除
    {
        cout << 'n'; // 输出字符n
    }
    return 0;
}
