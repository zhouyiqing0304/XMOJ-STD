#include <bits/stdc++.h>
using namespace std;
int f[2024], g[2024], h[2024], n,cnt = 1,res=1;
int main()
{
	cin>>n;
	for(int i=1;i<n;i++)cin>>h[i];
	f[1] = g[1] = h[1];
	for (int i = 2; i <= n; i ++ )
	{
		if (h[i] <= f[res]) f[++ res] = h[i];
		else
		{
			int k = upper_bound(f + 1, f + res + 1, h[i], greater<int>()) - f;
			f[k] = h[i];
		}
		if (h[i] > g[cnt]) g[++ cnt] = h[i];
		else
  		{
			int k = lower_bound(g + 1, g + cnt + 1, h[i]) - g;
			g[k] = h[i];
  		}
	}
	cout<<cnt;
	return 0;
}

