#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    queue<int>q;
    for(int i=1;i<=n;i++)
        q.push(i);
    int j=1;
    while(q.size())
    {
        if(j%m==0)
        {
            cout<<q.front()<<endl;
            q.pop();
        }   
        else
        {           
            q.push(q.front());
            q.pop();
        }
        j++;
    }
    return 0;
}
