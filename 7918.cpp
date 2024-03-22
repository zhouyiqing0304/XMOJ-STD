#include <bits/stdc++.h>
using namespace std;
int f(string s, string t) {
    int m = s.size(), n = t.size();
    int dp[m + 1][n + 1];
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i <= m; ++i) for (int j = 0; j <= n; ++j)
        if (i == 0) dp[i][j] = j;
        else if (j == 0) dp[i][j] = i;//还原操作次数
        else if (s[i - 1] == t[j - 1]) dp[i][j] = dp[i - 1][j - 1];
        else dp[i][j] = 1 + min({dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1]});
    return dp[m][n];//即最少得次数
}
int main() {
	freopen("letter.in", "r", stdin);
	freopen("letter.out", "w", stdout);
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    cout << f(s, t) << endl;
    return 0;
}

