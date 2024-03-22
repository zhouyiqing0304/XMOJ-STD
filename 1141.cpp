#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int n, x, y, left;
    cin >> n >> x >> y;
    left = (y%x==0)?n-y/x:n-y/x-1;
    if (left < 0) left = 0;
    cout << left << endl;
    return 0;
}
