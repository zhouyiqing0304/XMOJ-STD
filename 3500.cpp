#include <iostream>
using namespace std;
int S(int n) {
    int sum = 0;
    while (n>0) {
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int main() {
    int N;
    cin>>N;
    if (N % S(N) == 0) {
        cout<<"Yes";
    } else {
        cout<<"No";
    }
    return 0;
}

