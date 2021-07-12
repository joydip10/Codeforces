#include<iostream>
#include<cstdlib>
#include<stdio.h>
using namespace std;

int main()
{
    long long A,B,K,T;
    long AB, BK,KA;
    while(1)
    {
        //scanf("%lld,%lld,%lld, %lld",&A,&B,&K,&T);
        cin>>A>>B>>K>>T;
        AB=abs(A-B);
        BK=abs(B-K);
        KA=abs(K-A);
        long long ans =0;
        if(AB<T) ans+=
        cout<<ans<<endl;
    }
    return 0;
}
