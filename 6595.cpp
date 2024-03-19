#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<cmath>
using namespace std;
struct node
{
    int a[5100],len;
    node(){memset(a,0,sizeof(a));len=0;}
}f[35];
node multi(node n1,node n2)
{
    node no;
    no.len=n1.len+n2.len;
    for(int i=1;i<=n1.len;i++)
        for(int j=1;j<=n2.len;j++)
            no.a[i+j-1]+=n1.a[i]*n2.a[j];
    for(int i=1;i<=no.len;i++){if(no.a[i]>9)no.a[i+1]+=no.a[i]/10;no.a[i]%=10;}
    int i=no.len;
    while(no.a[i+1]>0){i++;no.a[i+1]+=no.a[i]/10;no.a[i]%=10;}
    while(no.a[i]==0 && i>1)i--;
    no.len=i;
    return no;
}
node del(node n1,node n2)
{
    node no;
    no.len=n1.len;
    for(int i=1;i<=no.len;i++)no.a[i]=n1.a[i]-n2.a[i];
    for(int i=1;i<=no.len;i++)if(no.a[i]<0){no.a[i+1]--;no.a[i]+=10;}
    int i=no.len;
    while(no.a[i+1]>0){i++;no.a[i+1]=no.a[i]/10;no.a[i]%=10;}
    while(no.a[i]==0 && i>1)i--;
    no.len=i;
    return no;
}
node add(node n1,int n2)
{
    node no;
    no=n1;
    no.a[1]+=n2;
    for(int i=1;i<=no.len;i++)if(no.a[i]>9){no.a[i+1]+=no.a[i]/10;no.a[i]%=10;}
    int i=no.len;
    while(no.a[i+1]>0){i++;no.a[i+1]+=no.a[i]/10;no.a[i]%=10;}
    while(no.a[i]==0 && i>1)i--;
    no.len=i;
    return no;
}
int n,d;
node pow_mod(node n1,int b)
{
    node ret;ret.a[1]=1;ret.len=1;
    while(b)
    {
        if(b%2==1)ret=multi(ret,n1);
        n1=multi(n1,n1);b/=2;
    }
    return ret;
}
int main()
{
    scanf("%d%d",&n,&d);
    if(d==0){printf("1\n");return 0;}
    f[0].a[1]=1;f[0].len=1;
    for(int i=1;i<=d;i++)
    {
        node tmp=pow_mod(f[i-1],n);
        f[i]=add(tmp,1);
    }
    node ans=del(f[d],f[d-1]);
    for(int i=ans.len;i>=1;i--)printf("%d",ans.a[i]);
    printf("\n");
    return 0;
}
