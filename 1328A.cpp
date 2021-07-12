#include<bits/stdc++.h>

using namespace std;

int main()
{
    long int t;
    long int a,b,c,p;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a%b!=0){
        double intpart;
        double k=modf(a/b,&intpart);
        p= (long int)intpart+1;
        c=b*p;
        cout<<fabs(a-c)<<endl;
        }
        else{
        cout<<0<<endl;
        }

    }
    return 0;
}
