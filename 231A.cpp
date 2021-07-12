#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int a,b,c,x=0;
    while(num--)
    {
        cin>>a>>b>>c;
        if((a+b+c)>=2)
        {
            x++;
        }
    }
    cout<<x<<endl;
    return 0;
}
