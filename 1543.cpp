# include <iostream>

using namespace std;

const int maxn = 1e3 + 10;
int n,m;
int A[maxn];
int B[maxn];
int L[maxn][maxn];

int main()
{
	cin >> n>>m;
	for (int i = 1; i <= n; i++) {
		cin >> A[i];
	}
	for (int i = 1; i <= m; i++) {
		cin >> B[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			//对应状态转移方程
			if (A[i] == B[j]) {
				L[i][j] = L[i - 1][j - 1] + 1;
			}
			else {
				L[i][j] = max(L[i - 1][j], L[i][j - 1]);
			}
		}
	}
	cout << L[n][n] << endl;
	return 0;
}
