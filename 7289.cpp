#include <iostream>
using namespace std;
int main()
{
	int start_h,start_m,end_h,end_m,m=0;
	cin>>start_h>>start_m>>end_h>>end_m;
	m=(end_h-start_h)*60+end_m-start_m;
	cout<<m;
 	return 0;
}
