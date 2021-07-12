#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    long long num,a,ln1=0,ln2=0,ln3=0,ln4=0,total=0;
    cin>>num;
    while(num--)
    {
        cin>>a;
        if(a==1) ln1++;
        if(a==2) ln2++;
        if(a==3) ln3++;
        if(a==4) ln4++;
    }
    if(ln3>=ln1)
    {
        double var=ceil(((double)(ln2*2))/4.0);
        long long varint=(long long) var;
        total=ln3+ln4+varint;
    }
    else
    {
        ln1=ln1-ln3;
        double var=ceil((double)((ln2*2)+ln1)/4.0);
        long long varint=(long long) var;
        total=ln3+ln4+varint;
    }
    cout<<total<<endl;
    return 0;
}
