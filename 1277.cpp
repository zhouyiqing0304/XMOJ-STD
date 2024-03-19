#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, K;
    int a[10000] = {0};
    int ans = 0, *maxVal;
    double temp;
    cin >> N >> K;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        a[i] = 100 * temp;
    }
    maxVal = max_element(a, a + N);
    int left = 0, right = *maxVal + 1, mid, sum;
    while (left + 1 != right)
    {
        mid = left + ((right - left + 1) >> 1);
        sum = 0;
        for (int i = 0; i < N; i++)
            sum += a[i] / mid;
        if (sum >= K)
            ans = mid,left = mid;
        else if (sum < K)
            right = mid;
    }

    if (ans < 1)
        cout << "0.00" << endl;
    else
        cout << fixed << setprecision(2) << ans / 100.0 << endl;
    return 0;
}
