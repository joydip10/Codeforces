#include<iostream>

using namespace std;

int main()
{
    long long int n;
    int arr[10]={0};
    string str;
    cin>>n;
    cin>>str;
    for(long long int i=0;i<str.size();i++)
    {
        if(str[i]=='L')
        {
            for(int i =0;i<10;i++)
            {
                if(arr[i]==0)
                {
                    arr[i]=1;
                    break;
                }
            }
        }
        else if(str[i]=='R')
        {
            for(int i =9;i>=0;i--)
            {
                if(arr[i]==0)
                {
                    arr[i]=1;
                    break;
                }
            }
        }
        else{
        int ch=(int)str[i];
        int pos=ch-48;
        if(pos>=0 && pos<=9)
        {
            arr[pos]=0;
        }
        }
    }

    for(int i =0;i<10;i++)
    {
        cout<<arr[i];
    }
    return 0;
}
