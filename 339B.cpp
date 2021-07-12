#include<iostream>
using namespace std;
int main()
{
    int m,n,steps=0;
    cin>>m>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int current;
    for(int i =0;i<n;i++)
    {
        if(i==0)
        {
            steps+=arr[i]-1;
        }
        else
        {
            if(arr[i]>=current)
            steps=arr[i]-current+steps;
            else
            steps=m-current+arr[i]+steps;
        }
        current=arr[i];
    }
    cout<<steps<<endl;
    return 0;
}
