#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>

using namespace std;

string str;
bool val;//expression value
int  cnt1, cnt2,out;

int main()
{
	freopen("expr.in","r",stdin);
	freopen("expr.out","w",stdout);
    cin >> str;
    for(int i = 0; i < str.size(); i ++)
    if(!out)
    {
       if(str[i]=='1') val =1;
       if(str[i] =='0') val = 0;
       if(str[i]=='&' && val==0){out =1,cnt1++;}
       if(str[i]=='|' && val==1){out =2,cnt2++;}
    }else{
           if(str[i]=='('){
             int cnt = 1;
             while(cnt){
                i++;
                if(str[i]=='(') cnt++;
                if(str[i]==')') cnt--;
             }
            }else if(out ==1 && str[i]=='|')out = 0;
            else if(str[i] ==')') out = 0;
            else if(out ==1 && str[i] == '&')cnt1 ++;
            else if(out ==2 && str[i] =='|')cnt2 ++;
            }
    std::cout << val << endl;
    std::cout << cnt1 << ' ' << cnt2 << endl;
    return 0;
}

