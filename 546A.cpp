#include<bits/stdc++.h>

using namespace std;

long long int func(long long int k,long long int w)
{
    if(w==1) return k*w;
    else return func(k,w-1)+(k*w);
}

int main()
{
    long long int k,n,w;
    cin>>k>>n>>w;
    long long int money=func(k,w);
    if((money-n)>0)cout<<(func(k,w)-n)<<endl;
    else cout<<0<<endl;
    return 0;
}
