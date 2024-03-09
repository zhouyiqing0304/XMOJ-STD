#include<iostream>
using namespace std;
int a[1024],tmp[1024],n,cnt,j;
bool Check(int a[])
{
    for(int i=0;i<n-1;i++)
        if(a[i]!=a[i+1])
            return false;
    return true;
}
void Case(int a[])
{
    for(int i=0;i<n;i++) tmp[i]=a[i]/2;
    for(int i=0;i<n;i++)
    {
        a[i]=tmp[i]+tmp[(n+(i-1))%n];
        if(a[i]%2) a[i]--;
    }
}
int main()
{
    while(cin>>n&&n){
        cnt=0;
        for(int i=0;i<n;i++) cin>>a[i];
        j=0;
        while(!Check(a))
        {
        	j++;
            Case(a);
            cnt++;
        }
        if(j==0){
            Case(a);
            cnt++;
		}
        cout<<cnt<<' ';
        cnt=0;
		for(int i=0;i<n;i++) cnt+=a[i];
		cout<<cnt<<endl;
    }
    return 0;
}
