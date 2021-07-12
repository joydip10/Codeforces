#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
long long arr[3000005];
using namespace std;
int main()
{
    IOS

    long long n;
    cin>>n;
    for(ll i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    long long  p=(n/2);
    long long sum =0;
    long long l=n;
    for(long long i =0;i<p;i++)
    {
        long long j = l-1;
        sum=sum+((arr[i]+arr[j])*(arr[i]+arr[j]));
        l=j;
    }
    cout<<sum<<endl;
    return 0;
}
