#include<bits/stdc++.h>
using namespace std;
int n=10,a[100010],tmp[100010],b[100010];
bool merge_comp(int x,int y)
{
	return (x<=y&&y%2==1)||(x>=y&&x%2==0);
}
void merge_sort(int s,int e)//s表示需要排序的数数的第一个数的下标，e表示最后的排序的数的下标。 
{
	if(s==e) return;
	int mid=(s+e)/2,s1=s,s2=mid+1,t=s;
	merge_sort(s,mid);merge_sort(mid+1,e);
	while(s1<=mid&&s2<=e) if(merge_comp(a[s1],a[s2]))tmp[t++]=a[s1++];else tmp[t++]=a[s2++];
	while(s1<=mid) tmp[t++]=a[s1++];
	while(s2<=e) tmp[t++]=a[s2++];
	for(int i=s;i<=e;i++) a[i]=tmp[i];
}
int main()
{
	for(int i=0;i<n;i++)cin>>a[i];
	merge_sort(0,n-1);
	for(int i=n-1;i>=0;i--) cout<<a[i]<<' ';
	return 0;
}
