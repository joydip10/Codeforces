#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,a,sum=0;
    cin>>num;
    int num1=num;
    while(num--)
    {
        cin>>a;
        sum=sum+a;
    }
    double sm = (double)sum;
    double nm =(double)(num1*100);
    double res=sm/nm;
    double resper=res*100.00;
    cout<<fixed;
    cout<<setprecision(12)<<resper<<endl;
    return 0;
}
