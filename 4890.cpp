#include <bits/stdc++.h>
using namespace std;
int b[8005];//保存排序后的位置
struct node {
    int a;//数值
    int w;//原来的位置
}a[8005];
 
int main() {
	freopen("sort.in","r",stdin);
	freopen("sort.out","w",stdout);
    int n,q;
    scanf("%d %d",&n,&q);
    for (int i=1;i<=n;i++){
        scanf("%d",&a[i].a);
        a[i].w=i;
    }
    for (int i=1;i<=n;i++){//做一次插入排序
        for (int j=i;j>=2;j--){
            if (a[j].a<a[j-1].a){
                swap(a[j],a[j-1]);
            }else{//加入break可以节省时间
                break;
            }
        }
    }
    for (int i=1;i<=n;i++){//把排序后的位置存到b数组里
        b[a[i].w]=i;
    }
    for (int i=1;i<=q;i++){
        int t;
        scanf("%d",&t);
        if (t==1){//操作1
            int x,v;
            scanf("%d %d",&x,&v);
            int k=b[x];//k为修改的数在排序后的数组的位置
            a[b[x]].a=v;//更新a数组的值
            for (int j=k;j<n;j++){//向后做逆插入排序
                //按值的大小排序，值相同的按原来的位置排序
                if (a[j].a>a[j+1].a||a[j].a==a[j+1].a&&a[j].w>a[j+1].w){
                    swap(a[j],a[j+1]);//交换
                    swap(b[a[j].w],b[a[j+1].w]);//将b数组中的位置也做下交换
                }else{
                    break;//break可以节省时间
                }
            }
            for (int j=k;j>=2;j--){//向前做插入排序
                //按值的大小排序，值相同的按原来的位置排序
                if (a[j].a<a[j-1].a||a[j].a==a[j-1].a&&a[j].w<a[j-1].w){
                    swap(a[j],a[j-1]);//交换
                    swap(b[a[j].w],b[a[j-1].w]);//将b数组中的位置也做下交换
                }else{
                    break;//break可以节省时间
                }
            }
        }else{//操作2
            int x;
            scanf("%d",&x);
            printf("%d\n",b[x]);
        }
    }
    return 0;
}
