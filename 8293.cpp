#include <bits/stdc++.h>
using namespace std;
int main() {
	freopen("shuffle.in","r",stdin);
	freopen("shuffle.out","w",stdout);
    int N, M;
    std::cin >> N >> M;
    std::vector<int> cards(N); // 创建一个大小为N的数组来模拟牌堆

    // 初始化牌堆
    for (int i = 0; i < N; ++i) {
        cards[i] = i + 1;
    }

    // 模拟M次洗牌
    for (int i = 0; i < M; ++i) {
        int A;
        std::cin >> A;
        // 将第A张牌移动到顶部
        int card = cards[A - 1];
        for (int j = A - 1; j > 0; --j) {
            cards[j] = cards[j - 1];
        }
        cards[0] = card;
    }

    // 输出牌堆顶部的牌
    std::cout << cards[0] << std::endl	;

    return 0;
}

