#include<bits/stdc++.h>
using namespace std;
void pre(string ms, string ps){
    int n=ms.size();
    if(n==0) return;
    char ch=ps[n-1];
    cout<<ch;
    // 当前结点在中序字符串中的下标
    int mid=ms.find(ch);
    pre(ms.substr(0,mid),ps.substr(0,mid));
    pre(ms.substr(mid+1),ps.substr(mid,n-mid-1));
}
int main(){
    string ms,ps;
    cin>>ms>>ps;
    pre(ms,ps);
    cout<<endl;
    return 0;
}
