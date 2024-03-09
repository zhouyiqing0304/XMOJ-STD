#include<iostream>
using namespace std;
int main() {
    int n,num=1; cin>>n;
    n>>=1;
    while(n!=0) {
        num++;
        n>>=1;
    }
    cout<<num;
    return 0;
}

