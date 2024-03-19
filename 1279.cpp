#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, M;
    cin >> N >> M;
    vector<int> a(N);
    for (int &x : a) cin >> x;
    int l = *max_element(a.begin(), a.end()), r = accumulate(a.begin(), a.end(), 0);//l最大值，r累加值
    while (l < r) {//标准二分
        int mid = (l + r) / 2, cnt = 1, s = 0;
        for (int x : a) if ((s += x) > mid) cnt++, s = x;
        cnt <= M ? r = mid : l = mid + 1;//缩小区间
    }
    cout << l << endl;
    return 0;
}

