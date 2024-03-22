#include<bits/stdc++.h>
using namespace std;
int base(int num, int baseAfter)
{
	if(num<baseAfter)
		return num;
	int nums_sum=0,ans;
	while (num)
	{
		ans=num%baseAfter;
		nums_sum+=ans;
		num/=baseAfter;
	}
	return nums_sum;
}
 
int main()
{
	int n,sum;cin>>n;
	if(n>2){
		sum=0;
		for(int i=2;i<n;i++)
		{
			sum+=base(n,i);
		}
		cout<<sum/__gcd((n-2),sum)<<'/'<<(n-2)/__gcd((n-2),sum)<<endl;
	}
	else cout<<base(n,2)<<'/'<<1<<endl;
	return 0;
}
