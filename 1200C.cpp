#include<iostream>
using namespace std;
int main()
{
    long long int n,m,questions,p,q,a,b,c,d;

    cin>>n>>m>>questions;

    p=n/2;
    q=m/2;
    //cout<<p<<" "<<q<<endl;
    while(questions--)
    {
        bool ch=true;
        cin>>a>>b>>c>>d;
        if(a==1 && c==1)
        {
            if(b<=p && d>p) ch=false;
            else if(b>p && d<=p) ch=false;
        }
        else if(a==1 && c==2)
        {
            if(b<=p && d>q) ch=false;
            else if(b>p && d<=q) ch=false;
        }
        else if(a==2 && c==2)
        {
            if(b<=q && d>q) ch=false;
            else if(b>q && d<=q) ch=false;
        }
        else if(a==2 && c==1)
        {
            if(b<=q && d>p) ch=false;
            else if(b>q && d<=p) ch=false;
        }
        if(ch==true)
        {
            cout<<"YES"<<endl;
        }
        else if(ch==false)
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
