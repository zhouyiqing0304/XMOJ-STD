#include <bits/stdc++.h>
using namespace std;
void read(int& x)//干脆用指针
{
	x = 0;
	int f = 0;
	char ch = getchar();
	while (ch < '0' || ch > '9') f |= (ch == '-'),ch = getchar();
	while (ch >= '0' && ch <= '9') x = (x << 1) + (x << 3) + (ch ^ 48),ch = getchar();
	x = f ? -x : x;
}
int n, m, k,a[1000100];
int check(int s)
{
	int ans = 0;
	for (int i = 1; i < m; i++)
	{
		if (i - 1 > ans * 2 * k)return false;
		if (a[i + 1] - a[i] <= s) i++,ans++;
		if (ans == n)return true;
	}
}
int main()
{
	int s = 0;
	read(n); read(k);
	m = 2 * n * k;
	for (int i = 1; i <= m; i++)read(a[i]);
	sort(a + 1, a + 1 + m);
	int left = 0, right = a[m], mid;
	while (left <= right)
	{
		mid = (left + right) >> 1;
		if (check(mid)) s = mid,right = mid - 1;
		else left = mid + 1;
	}
	cout << s;
	return 0;
}
