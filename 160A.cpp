#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    sort(arr,arr+n);
    int cnt=0;
    int taken=0,left=0;
    for(int i=n-1;i>=0;i--)
    {
        taken=taken+arr[i];
        cnt++;
        left=sum-taken;
        if(taken>left){
            break;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
