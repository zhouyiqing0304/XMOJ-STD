#include<iostream>
using namespace std;

//对应于长度为1,2...10的钢条价格表
int p[1010];

//返回两个数的较大值
int max(int a,int b)
{
	return (a>b)?a:b;
}

/*首先检查所需值是否已知，如果是，则直接返回保存的值。
否则，用通常方法计算所需值q,然后将此值存入r[n]。值得注意的
是，笔者在此处没有对钢条的长度n进行限制，所以n可能大于10，
于是增加了自己的判断，若n大于10，则计算n-10的子序列*/
int MemoizedCutRodAux(int p[],int n,int r[])
{
	if(r[n]>=0)
		return r[n];
	int q;
	if(n==0)
		q=0;
	else
	{
		q=-1;
		for(int i=0;i<n;i++)
		{
			if(i<10)
				q=max(q,p[i]+MemoizedCutRodAux(p,n-1-i,r));
			else
				q=max(q,r[10]+MemoizedCutRodAux(p,n-1-10,r));
		}
	}
	r[n]=q;
	return q;
}

int main()
{
	int m;
	cin>>m;
	for(int i=0;i<m;i++)cin>>p[i];
	cin>>m;
	while(m>0){
	int n;
	cin>>n;
	//将辅助数组的r[0..n]元素均初始化为-1
	int *r=new int[n+1];
	for(int i=0;i<=n;i++)
	{
		r[i]=-1;
	}
	int sum=MemoizedCutRodAux(p,n,r);
	cout<<sum<<endl;
	m--;
	}
	return 0;
}
