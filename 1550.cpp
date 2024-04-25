#include <bits/stdc++.h>
using namespace std;
int a[1000][1000],x[1000][1000];
void f(int p[], int n) {
    for (int l = 2; l <= n; l++)
        for (int i = 1; i <= n - l + 1; i++) {
            int j = i + l - 1;
            a[i][j] = 1000000000;
            for (int tmp, d = i; d < j; d++) {
                tmp = a[i][d] + a[d + 1][j] + p[i - 1] * p[d] * p[j];
                if (tmp < a[i][j])
                    a[i][j] = tmp,x[i][j] = d;
            }
        }
}
int main() {
    int n;
    scanf("%d", &n);
    int p[1000];
    for (int tmp, i = 0; i <= n; i++)cin>>p[i];
    f(p, n);
    cout<<a[1][n];
    return 0;
}

