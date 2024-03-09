#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, c, d, t, n, i, m[10010];
	cin >> n;
	for (i = 0; i < n; i++){
		cin >> a >> b >> c >> d;
		m[i] = 0;
		if (c > 1) m[i] += ( c - 1) / b;
		if (d < a) m[i] += a / b - d / b;
	}
	for(i = 0; i < n; i++) cout << m[i] << endl;
	return 0;
}
