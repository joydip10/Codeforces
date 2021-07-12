#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    int v1=0,v2=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        {
            v1=v1+(a[i]-'A');
        }
        else if(a[i]>='a' && a[i]<='z')
        {
            v1=v1+(a[i]-'a');
        }


        if(b[i]>='A' && b[i]<='Z')
        {
            v2=v2+(b[i]-'A');
        }
        else if(b[i]>='a' && b[i]<='z')
        {
            v2=v2+(b[i]-'a');
        }


        if(v1<v2){
            cout<<-1<<endl;
            break;
        }
        else if(v2<v1){
            cout<<1<<endl;
            break;
        }
    }


    if(v1==v2)cout<<0<<endl;

    return 0;
}
