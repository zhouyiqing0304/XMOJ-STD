#include <bits/stdc++.h>
using namespace std;

int main() {
	bool b=false; 
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i) 
        if (a[i] % 2 == 0){ 
            cout << a[i] << " ";b=true;} 
    if(b)cout << endl;
    for (int i = 0; i < n; ++i) 
        if (a[i] % 2 != 0) 
            cout << a[i] << " ";
    return 0;
}

