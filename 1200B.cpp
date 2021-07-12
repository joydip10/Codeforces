#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int test,n,m,k,arr[100000];
    cin>>test;
    while(test--){
    int ck =0;
    cin>>n>>m>>k;
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i =0;i<n-1;i++){
    if(fabs(arr[i]-arr[i+1])<=k)
    {
        if(arr[i+1]<=arr[i])
        {
            m=m+min(arr[i],arr[i]-arr[i+1]+k);
        }
        else
        {
            m=m+min(arr[i],k-(arr[i+1]-arr[i]));
        }
    }
    else
    {
        if(arr[i+1]>arr[i])
        {
            m=m-(arr[i+1]-arr[i]-k);
        }
        else
        {
            m=m+min(arr[i],arr[i]-arr[i+1]+k);
        }
        if(m<0)
        {
            cout<<"NO"<<endl;
            ck=1;
            break;
        }
    }
    }
    if(ck==0)cout<<"YES"<<endl;
}
return 0;
}
