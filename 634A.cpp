#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int test;
    long long int num;
    cin>>test;
    while(test--)
    {
        cin>>num;
        if(num<=2) cout<<0<<endl;
        else if(num%2!=0) cout<<(num/2)<<endl;
        else if(num%2==0) cout<<((num/2)-1)<<endl;
    }
    return 0;
}
