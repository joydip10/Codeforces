#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int num;
        string c;
        cin>>num;
        cin>>c;
        if(num != c.size()) break;
        if(c.size()==2 && ( (c[0]==c[1]) || (c[0]>c[1]) ) ){
            cout<<"NO"<<endl;
        }
        if(c.size()==2  && c[0]<c[1])
        {
            cout<<"YES"<<endl;
            cout<<"2"<<endl;
            cout<<c[0]<<" "<<c[1]<<endl;
        }
        if(c.size()>2)
        {
            cout<<"YES"<<endl;
            cout<<"2"<<endl;
            cout<<c[0]<<" ";
            for(int  k=1;k<c.size();k++){
                cout<<c[k];
            }
            cout<<endl;
        }
    }
    return 0;
}
