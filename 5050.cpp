//code by zhouyiqing周意清
//https://www.xmoj.tech/userinfo.php?user=zhouyiqing
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int x,y;
}a[1000001];
bool cmp(node o,node p)
{
    return o.x<p.x;
}
int main()
{
    int sum=0,tim=0;
    int n,i,top;
    cin>>n;
    priority_queue<int,vector<int>,greater<int> > heap;
    for(i=0;i<n;i++)
    {
        cin>>a[i].x;
    }
    for(i=0;i<n;i++)
    {
        cin>>a[i].y;
    }
    sort(a,a+n,cmp);
    for(i=0;i<n;i++)
    {
        if(tim<a[i].x)
        {
            tim++;
            heap.push(a[i].y);
            sum+=a[i].y;
        }
        else
        {
            top=heap.top();
            if(top<a[i].y)
            {
                heap.pop();
                heap.push(a[i].y);
                sum+=a[i].y;
                sum-=top;
            }
        }
    }
    cout<<sum;
    return 0;
}
