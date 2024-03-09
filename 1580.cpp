#include <bits/stdc++.h>
using namespace std;
char s[110];
int a[110],b[110],c[110],la,lb,lc,fa,fb,fc;
// 读入s，n为长度，f为正负性（0正1负）
void read(int x[],int &n,int &f){
    cin>>s;
    n=strlen(s);
    for(int i=0,j=n;i<n;++i,--j)
        if(s[i]=='-')
            f=1;
        else
            x[j]=s[i]-'0';
    n-=f;
}
// 如果a大于等于b则返回true，否则返回false
bool large(){
    if(la!=lb)
        return la>lb;
    for(int i=la;i>=1;--i)
        if(a[i]!=b[i])
            return a[i]>b[i];
    return true;
}
// a+b，结果保存到c
void plus1(){
    lc=max(la,lb);
    for(int i=1;i<=lc;++i){
        c[i]+=a[i]+b[i];
        c[i+1]+=c[i]/10;
        c[i]%=10;
    }
    if(c[lc+1])
        ++lc;
}
// x-y，结果保存到c
void minus1(int x[],int lx,int y[],int ly){
    lc=lx;
    for(int i=1;i<=lc;++i){
        c[i]=x[i]-y[i];
        if(c[i]<0){
            --x[i+1];
            c[i]+=10;
        }
    }
    while(lc>1&&c[lc]==0) --lc;
}
int main(){
    read(a,la,fa);
    read(b,lb,fb);
    if(fa==fb){
        // 正负性相同，a+b，结果保存到c，c的正负性与a相同
        plus1();
        fc=fa;
    }else if(large()){
        // 正负性不同，且a大于等于b，a-b，结果保存到c，c的正负性与a相同
        minus1(a,la,b,lb);
        fc=fa;
    }else{
        // 正负性不同，且a小于b，b-a，结果保存到c，c的正负性与b相同
        minus1(b,lb,a,la);
        fc=fb;
    }
    // 如果c为0，不输出负号
    if(lc==1&&c[1]==0) fc=0;
    if(fc) cout<<"-";
    for(int i=lc;i>=1;--i) cout<<c[i];
    return 0;
}
