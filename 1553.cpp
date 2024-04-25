#include <iostream>
#include <cstring>
using namespace std;
int n, sum[305], f[305][305];
int main() {
	scanf("%d", &n);
	int a;
	memset(f, 0x3f, sizeof(f));
	for (int i = 1; i <= n; i ++ ) {
		scanf("%d", &a);
		f[i][i] = 0;
		sum[i] += sum[i - 1] + a;
	}
	for (int l = 2; l <= n; l ++ ) {
		for (int i = 1; i + l - 1 <= n; i ++ ) {
			int j = i + l - 1;
			for (int k = i; k < j; k ++ ) {
				f[i][j] = min(f[i][j], f[i][k] + f[k + 1][j] + sum[j] - sum[i - 1]);
			}
		}
	}
	printf("%d\n", f[1][n]);
	return 0;
}

