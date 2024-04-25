#include<bits/stdc++.h>
using namespace std;
int n;
int h[2024],f[2024],q[2024];

int main()
{
    string s;
    getline(cin,s);
    getline(cin,s);
    stringstream ssin(s);
    n=0;
    while(ssin >> h[n]) n ++;
    int res = 0,cnt = 0;
    for(int i = 0; i < n; i ++)
    {
        f[i] = 1;
        for(int j = 0; j < i; j ++)
        {
            if(h[i] <= h[j]) f[i] = max(f[i],f[j] + 1);
        }
        res = max(res,f[i]);
        int k = 0;
        while(k < cnt && h[i] > q[k]) k ++;
        if(k == cnt)
        {
            q[cnt] = h[i];
            cnt ++;
        }
        else
        {
            q[k] = h[i];
        }
    }
    cout << res << endl;
    return 0;
}
