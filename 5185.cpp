#include<bits/stdc++.h>
using namespace std;
bool isRightAngleTriangle(int x1, int y1, int x2, int y2, int x3, int y3) {
    int aSqr = (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1);
    if(aSqr==0)return false;
    int bSqr = (x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2);
    if(bSqr==0)return false;
    int cSqr = (x1 - x3)*(x1 - x3) + (y1 - y3)*(y1 - y3);
    if(cSqr==0)return false;
    int sides[3] = {aSqr, bSqr, cSqr};
    sort(sides, sides + 3);
    return sides[2] == sides[0] + sides[1];
}
int main()
{
	int x1,y1,x2,y2,x3,y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	if(isRightAngleTriangle(x1,y1,x2,y2,x3,y3))cout<<"RIGHT";
	else {
		for(int i=-1;i<=1;i+=2)if(isRightAngleTriangle(x1+i,y1,x2,y2,x3,y3)){cout<<"ALMOST";return 0;}
		for(int i=-1;i<=1;i+=2)if(isRightAngleTriangle(x1,y1+i,x2,y2,x3,y3)){cout<<"ALMOST";return 0;}
		for(int i=-1;i<=1;i+=2)if(isRightAngleTriangle(x1,y1,x2+i,y2,x3,y3)){cout<<"ALMOST";return 0;}
		for(int i=-1;i<=1;i+=2)if(isRightAngleTriangle(x1,y1,x2,y2+i,x3,y3)){cout<<"ALMOST";return 0;}
		for(int i=-1;i<=1;i+=2)if(isRightAngleTriangle(x1,y1,x2,y2,x3+i,y3)){cout<<"ALMOST";return 0;}
		for(int i=-1;i<=1;i+=2)if(isRightAngleTriangle(x1,y1,x2,y2,x3,y3+i)){cout<<"ALMOST";return 0;}
		cout<<"NEITHER";
		return 0;
	}
	return 0;
}

