#include<bits/stdc++.h>
using namespace std;
long long n,a[100010],tmp[100010],o=0;
void merge_sort(long long s,long long e)
{
	if(s==e) return;
	long long mid=(s+e)/2,s1=s,s2=mid+1,t=s;
	merge_sort(s,mid);merge_sort(mid+1,e);
	while(s1<=mid&&s2<=e) if(a[s1]<=a[s2])tmp[t++]=a[s1++];else o+=mid-s1+1,tmp[t++]=a[s2++];
	while(s1<=mid) tmp[t++]=a[s1++];
	while(s2<=e) tmp[t++]=a[s2++];
	for(int i=s;i<=e;i++) a[i]=tmp[i];
}
int main()
{
	cin>>n;
	for(long long i=0;i<n;i++)cin>>a[i];
	merge_sort(0,n-1);
	cout<<o<<endl;
	return 0;
}
