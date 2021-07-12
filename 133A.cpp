#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    bool chk=false;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='H' || str[i]=='Q' || str[i]=='9')
        {
            chk=true;
            break;
        }
    }
    if(chk==true) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
