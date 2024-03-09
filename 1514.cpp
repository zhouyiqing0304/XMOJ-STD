#include<bits/stdc++.h>
using namespace std;
struct Node{
	string stdno,name,gender,address;
	int age,score,nxt;
}s[100010];
int tot=0;
int main()
{
	string str;
	while(1){
		cin>>str;
		if(str=="end")break;
		s[++tot].stdno=str;
		cin>>s[tot].name>>s[tot].gender>>s[tot].age>>s[tot].score>>s[tot].address;
		s[tot].nxt=s[0].nxt,s[0].nxt=tot;
	}
	int p=s[0].nxt;
	while(p){
		cout<<s[p].stdno<<' '<<s[p].name<<' '<<s[p].gender<<' '<<s[p].age<<' '<<s[p].score<<' '<<s[p].address<<endl;
		p=s[p].nxt;
	}
	return 0;
}
