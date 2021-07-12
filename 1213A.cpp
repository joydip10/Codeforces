#include<iostream>
using namespace std;

int main()
{
    long long int n,num,sum=0;
    cin>>n;
    long long int nn=n;
    while(n--)
    {
        cin>>num;
        sum=sum+num;
    }
    long long int result=sum/nn;
    cout<<result<<endl;
    return 0;
}
