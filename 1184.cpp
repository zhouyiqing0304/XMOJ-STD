#include <iostream>
using namespace std;
int n,m;
int main(){
	freopen("number.in","r",stdin);
	freopen("number.out","w",stdout);
	cin>>n;
	for(int i=2;i<n;i++) if(n%i==0){
            m=n/i;
            cout<<m;
            break;
       }
   return 0;
}
