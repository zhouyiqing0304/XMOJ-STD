#include<bits/stdc++.h>
using namespace std;
string st[1010],s;
int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,t,u,v,w,x,y,z; 
int main()
{
	cin>>n;
	for(i=0;i<n;i++){
		cin>>s;
		sort(st,st+l);
		if(s[0]=='+') {
			s.erase(0,1);
			st[l]=s+" ";
			j++;
			l++;
		}
		else if(s[0]=='-'){
			s.erase(0,1);
			for(k=0;k<=n;k++) if(s+" "==st[k]) {
				st[k]="";
			}
			j--;
			continue;
		}
		else if(s=="Q"){
			sort(st,st+j);
			cout<<j<<endl;
			for(k=0;k<=n+j;k++) cout<<st[k];
			cout<<endl;
			continue;
		}
	}
}
/*
4
+a
+b
-a
Q
*/
