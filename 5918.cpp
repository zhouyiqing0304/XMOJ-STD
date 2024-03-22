#include <bits/stdc++.h>
using namespace std;

string add_large_numbers(const string& num1, const string& num2) {
    int n = num1.length(), m = num2.length(); string result; result.reserve(max(n, m) + 1);
    int carry = 0;
    for (int i = n - 1, j = m - 1; i >= 0 || j >= 0 || carry; --i, --j) {
        int sum = carry;
        if (i >= 0) { sum += num1[i] - '0'; }
        if (j >= 0) { sum += num2[j] - '0'; }
        carry = sum / 10;
        result.push_back('0' + (sum % 10));
    }

    reverse(result.begin(), result.end());
    return result;
}

int main() {
    string num1, num2, s="1";
    cin >> num1 >> num2;
    stringstream ss;ss<<num1;
    int n;
    ss>>n;
    for(int i=1;i<=n;i++) s.insert(i,"0");
    cout << add_large_numbers(s, num2) << endl;
    return 0;
}
