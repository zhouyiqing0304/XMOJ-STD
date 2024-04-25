#include <iostream>
#include <vector>
using namespace std;

int main() {
	freopen("mball.in","r",stdin);
	freopen("mball.out","w",stdout);
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    // 高斯消元法处理异或
    int base = 0;
    for (int i = 0; i < 32; ++i) {
        int index = -1;
        for (int j = base; j < N; ++j) {
            if (A[j] & (1 << i)) {
                index = j;
                break;
            }
        }
        if (index == -1) continue;
        swap(A[base], A[index]);
        for (int j = 0; j < N; ++j) {
            if (j != base && (A[j] & (1 << i))) {
                A[j] ^= A[base];
            }
        }
        ++base;
    }

    // 结果是2的base次幂
    int result = 1 << base;
    cout << result << endl;
    return 0;
}

