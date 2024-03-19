#include<bits/stdc++.h>
using namespace std;
int main() {
	int p=0, q=0;
	int n;
	string s;
	float h, a[41], b[41];
	cin >> n;
	for (int i=1; i<=n; i++) {
		cin >> s >> h;
		if (s == "male") b[++p] = h;
		else a[++q]=h;
	}
	for (int i=1; i<p; i++)
		for (int j=i+1; j<=p; j++)
			if (b[i] > b[j])
				swap(b[i], b[j]);
	for (int i=1; i<q; i++)
		for (int j=i+1; j<=q; j++)
			if (a[i] < a[j])
				swap(a[i], a[j]);
	for (int i=1; i<=p; i++) cout<<fixed<<setprecision(2)<<b[i]<<' ';
	for (int i=1; i<=q; i++) cout<<fixed<<setprecision(2)<<a[i]<<' ';
	
	return 0;
}

