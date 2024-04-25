#include<iostream>
#include<cstring>
using namespace std;

const int N = 110;
int f[N][N];
int w[N][N];
int n;

int main()
{
    //输入
    scanf("%d", &n);
    for(int i = 1; i <= n; i ++)
        for(int j = 1; j <= n; j++)
        scanf("%d", &w[i][j]);
    //因为要求最小值，先把所有的方格都初始化为一个特别大的数0x3f3f3f3f
    memset(f, 0x3f, sizeof f);
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
        {
            //因为从左上角(1,1)开始走，所以直接把费用w[1][1]赋值给f[1][1];
            if(i == 1 && j == 1)
                f[i][j] = w[i][j];
            else
            {
                //计算当前位置的最小费用
                f[i][j] = min(f[i][j], f[i - 1][j]+ w[i][j]) ;
                f[i][j] = min(f[i][j], f[i][j - 1]+ w[i][j]) ;
            }
        }

    printf("%d\n", f[n][n]);

    return 0;
}

