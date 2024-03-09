#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tm[16][2]={{0,0},{1,10},{2,20},{3,30},{4,40},{5,50},{10,1},{11,11},{12,21},{13,31},{14,41},{15,51},{20,2},{21,12},{22,22},{23,32}};
	int a,b;
	char c;
	cin>>a>>c>>b;
	for(int i=0;i<16;i++) {
		if(tm[i][0]*60+tm[i][1]-a*60-b<0)continue;
		cout<<(tm[i][0]-a)*60+(tm[i][1]-b);
		return 0;
	}
	cout<<((24-a-1)*60+(60-b));
	return 0;
}
