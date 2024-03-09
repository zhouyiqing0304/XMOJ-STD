#include <bits/stdc++.h> 
using namespace std; 

int n, m[50], mlen, steps; 

int main() { 
    char str[50]; 
    cin >> n >> str; 
    mlen = strlen(str); 
    for (int i = 0; i < mlen; ++i) {
        if ('0' <= str[i] && str[i] <= '9') {
            m[i] = str[i] - '0'; 
        } else {
            m[i] = str[i] - 'A' + 10; 
        }
    } 
    reverse(m, m + mlen); 
    int tmp[50]; 
    while (steps <= 30) { 
        bool good = true; 
        for (int i = 0, j = mlen - 1; i < j; ++i, --j) { 
            if (m[i] != m[j]) { 
                good = false; 
                break; 
            } 
        } 
        if (good) break; 
        ++steps; 
        memcpy(tmp, m, sizeof(m)); 
        for (int i = 0, j = mlen - 1; i < mlen; ++i, --j) {
            m[i] += tmp[j]; 
        }
        for (int i = 0; i < mlen; ++i) { 
            m[i + 1] += m[i] / n; 
            m[i] %= n; 
        } 
        if (m[mlen] > 0) ++mlen; 
    } 
    if (steps <= 30) {
        cout << steps << endl; 
    } else {
        cout << "Impossible"; 
    }
    return 0; 
}

