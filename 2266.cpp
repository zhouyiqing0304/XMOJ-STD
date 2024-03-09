#include <iostream>
#include <vector>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<int> degree(N + 1, 0);
    for (int i = 1; i <= N; i++) {
        int V, F;
        cin >> V >> F;
        if (F != 0) {
            degree[F]++;
        }
    }
    int K;
    cin >> K;
    for (int i = 0; i < K; i++) {
        int x;
        cin >> x;
        cout << degree[x] << endl;
    }
    return 0;
}

