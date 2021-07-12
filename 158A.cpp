#include<iostream>
using namespace std;
int main()
{
    long long n,k,a,arr[55],index=0;
    cin>>n>>k;
    for(long long i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    a=arr[k-1];
    for(long long i =0;i<n;i++)
    {
        if(arr[i]>=a && arr[i]>0)
        {
            index++;
        }
    }
    cout<<index<<endl;

    return 0;
}
