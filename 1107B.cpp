#include<iostream>
#include<string.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    IOS
    int test;
    cin>>test;
    for(int j =0;j<test;j++)
    {
       // int arr[10]={0,1,2,3,4,5,6,7,8,9};
        long long int k,x;
        cin>>k>>x;

      long long  int sum=((k-1)*9)+x;
        cout<<sum<<endl;
    }
    return 0;
}
