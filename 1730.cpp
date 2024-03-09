#include<iostream>
using namespace std;
int a[1001];
int main()
{
    int n,j;
    cin >> n;
    for (int i = 1; i <= n; i++) for (a[i]=1,j = 1; j <= i/2; j++) a[i] += a[j];
    cout<<a[n];
    return 0;
}
