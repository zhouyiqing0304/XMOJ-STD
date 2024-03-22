#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
char a[101][51];
int len,i,k=0,j;
string danci;

void paixu(char a[101][51],int start,int end) //自定义排序函数，对字二维符串数组排序
{
	char tmp[51];
	int i,j;
	for(i=end-1;i>=1;i--)
	{
		for(j=start;j<=i;j++)
		{
			if(strcmp(a[j],a[j+1])>0) //如果字典序逆序，则交换 
			{
				strcpy(tmp,a[j]); //将a[j]字符串复制到临时字符串tmp中 
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],tmp);
			}
		}
		
	}
	return;
 } 
int main()
{
	bool flag=false;//是否遇到一个新单词，false表示没有遇到，true表示遇到了 
	memset(a,0,sizeof(a));
	while(getline(cin,danci))//反复接收单词序列（接收多行单词序列），碰到换行结束，可以接收空格 
	{
	danci=" "+danci+" ";//在单词序列前后加空格
	len=danci.length();
	j=0;
	for(i=0;i<len;i++)
	{
		
		if(danci[i]==' ') //碰到空格，表明不是一个单词 
		{
			flag=false;
			//a[k][j]='\0';
			
		}
		else //碰到的不是空格时 
		{
			if(flag==false)
			{
				k++;//新单词 
				j=0;
				flag=true;
				a[k][j]=danci[i];
				j++;
			}
			else //单词中间字母 
			{
				a[k][j]=danci[i];
				j++;
			}	
		} 
		
	}	
	}
	
	
	paixu(a,1,k);//对记录1至k的单词按字典序升序排序 
	for(i=1;i<=k;i++)
	{
		if(strcmp(a[i],a[i-1])==0)//如果和前面字符串相等，则不输出，相同字符串输出一次
		continue; 
		cout<<a[i]<<endl;
	}
    return 0;
}
