#include<bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int, vector<int>, greater<int> > minheap;
    priority_queue<int> maxheap;
    vector<int> res;
    res.clear();
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin>>x;
        if (maxheap.empty() || x <= maxheap.top()) maxheap.push(x);
        else minheap.push(x);
        if (minheap.size() > maxheap.size()) {
            x = minheap.top();
            minheap.pop();
            maxheap.push(x);
        }
        else if (minheap.size() + 2 <= maxheap.size()) {
            x = maxheap.top();
            maxheap.pop();
            minheap.push(x);
        }
        if (i%2==1) res.push_back(maxheap.top());
    }
    for (int i = 0; i < res.size(); i++) printf("%d ", res[i]);
    return 0;
}

