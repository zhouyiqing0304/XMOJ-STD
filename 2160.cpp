#include<bits/stdc++.h>
using namespace std;
int n,id=1,score[100010];
void run()
{
    int tot=0,skip;
    for (int i=1;i<=10;++i) {
        skip=0;
        if (score[id]==10) {
            tot+=score[id]+score[id+1]+score[id+2];
            skip=2;
            ++id;
        } else if (score[id]+score[id+1]==10) {
            tot+=score[id]+score[id+1]+score[id+2];
            skip=1;
            id+=2;
        } else {
            tot+=score[id]+score[id+1];
            skip=0;
            id+=2;
        }
    }
    printf("%d\n",tot);
    id+=skip;
}
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&score[i]);
    while (id<=n)
        run();
    return 0;
}
