#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n = s.size(), b = 0, g = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'b') b++;
        if (s[i] == 'o' && s[i - 1] != 'b') b++;
        if (s[i] == 'y' && s[i - 1] != 'o' && s[i - 2] != 'b') b++;
        if (s[i] == 'g') g++;
        if (s[i] == 'i' && s[i - 1] != 'g') g++;
        if (s[i] == 'r' && s[i - 1] != 'i' && s[i - 2] != 'g') g++;
        if (s[i] == 'l' && s[i - 1] != 'r' && s[i - 2] != 'i' && s[i - 3] != 'g') g++;
    }
    cout << b << endl << g;
    return 0;
}

