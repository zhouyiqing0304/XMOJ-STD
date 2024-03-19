#include <iostream>
using namespace std;
void Printarr(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i];
    cout<<endl;
}
int main()
{
    int n;
    int arr[100];
    cin>>n;
    cout<<n<<endl;
    for(int i=0;i<n;i++)
        arr[i]=0;
    for(int j=0;j<n;j++)
    {
        for(int o=0;o<n;o++)
        {
            if(o==j)
                continue;;
            if(arr[o]==0)
            {
                arr[o]=1;
                continue;
            }
            if(arr[o]==1)
                arr[o]=0;
        }
        Printarr(arr,n);
    }
}
