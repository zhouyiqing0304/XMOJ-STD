#include<bits/stdc++.h>
using namespace std;
void rotate_(string &st){
	st=st.substr(st.size()-1)+st;
	st.erase(st.size()-1);
}
int main()
{
	freopen("b.in","r",stdin);
	freopen("b.out","w",stdout);
	string a,b;
	int A=-1,B=-1;
	cin>>a>>b;
	for(int i=0;i<=a.size();i++){
		if(a==b){
			A=i;
			break;
		}
		rotate_(a);
	}
	if(A==-1)cout<<-1;
	else cout<<A;
	return 0;
}
