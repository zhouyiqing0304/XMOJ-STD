#include <bits/stdc++.h>
using namespace std;
double s,a,b;
// 罗恩的总耗时
double f1(double x){
    // 设赫敏下扫帚处至出发点距离为x
    return x/b+(s-x)/a;
}
// 赫敏的总耗时
double f2(double x){
    // 设赫敏下扫帚处至出发点距离为x
    double t1=x/b;
    double t2=(x-t1*a)/(a+b);
    double t3=(t2*b+s-x)/b;
    return t1+t2+t3;
}
int main(){
    cin>>s>>a>>b;
    double l=0,r=s,mid;
    while(fabs(l-r)>1e-6){
        mid=(l+r)/2;
        if(f1(mid)>f2(mid)) l=mid;
        else r=mid;
    }
    cout<<fixed<<setprecision(2)<<mid<<endl;
    return 0;
}
