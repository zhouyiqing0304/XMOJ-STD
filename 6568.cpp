#include <bits/stdc++.h>
using namespace std;
int a[5][5],b[5][5];
int c[4]= {1,-1,0,0};
int d[4]= {0,0,1,-1};
int e[5][5];
int f[20];
int g[20][20];
int h,i=0x7f7f7f7f;
struct j { int x,y,z; };
queue<j> k;
void l(int m,int n,int o) {
    j p;
    memset(e,0,sizeof(e));
    p.x=m,p.y=n,p.z=0;
    e[m][n]=1;
    k.push(p);
    while(!k.empty()) {
        j q=k.front();
        k.pop();
        for(int r=0; r<4; r++) {
            int s=q.x+c[r];
            int t=q.y+d[r];
            j u;
            if(s>=1&&s<=4&&t>=1&&t<=4&&!e[s][t]) {
                e[s][t]=1;
                u.x=s;
                u.y=t;
                u.z=q.z+1;
                k.push(u);
                if(b[s][t]) { g[o][b[s][t]]=u.z; }
            }
        }
    }
}
int v[20];
void w(int x) {
    if(x>h) {
        int y=0;
        for(int z=1; z<=h; z++) { y+=g[z][v[z]]; }
        i=min(i,y);
        return ;
    }
    for(int aa=1; aa<=h; aa++) {
        if(!f[aa]) {
            f[aa]=1;
            v[x]=aa;
            w(x+1);
            f[aa]=0;
            v[x]=0;
        }
    }
    return;
}
int main() {
    for(int ab=1; ab<=4; ab++) {
        for(int ac=1; ac<=4; ac++) {
            scanf("%1d",&a[ab][ac]);
        }
    }
    for(int ad=1; ad<=4; ad++) {
        for(int ae=1; ae<=4; ae++) {
            scanf("%1d",&b[ad][ae]);
            if(b[ad][ae]==1&&a[ad][ae]==1) {
                b[ad][ae]=0;
                a[ad][ae]=0;
            }
            else if(b[ad][ae]==1) {
                h++;
                b[ad][ae]=h;
            }
        }
    }
    int af=0;
    for(int ag=1; ag<=4; ag++) {
        for(int ah=1; ah<=4; ah++) {
            if(a[ag][ah]) {
                af++;
                l(ag,ah,af);
            }
        }
    }
    w(1);
    printf("%d",i);
    return 0;
}

