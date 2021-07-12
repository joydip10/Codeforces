#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i =0 ;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    int num=0;
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                num++;
            }
        }
    }
    cout<<num<<endl;
    return 0;
}
