#include <iostream>
using namespace std;
const int MAXN = 1024;
unsigned long long a[MAXN],b[MAXN];
int main(){
    int n;
    cin >> n;
    int k = 9;a[1] = 9,b[1] = 1;
    for (int i=2; i<=n; i++){
        if (i==n) k=8;
        a[i] = (a[i-1]*k + b[i-1])%12345,b[i] = (a[i-1] + b[i-1]*k)%12345;
    }
    cout<<a[n]%12345;
    return 0;
}
