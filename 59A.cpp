#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int lc=0,uc=0;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='a' && str[i]<='z') lc++;
        if(str[i]>='A' && str[i]<='Z') uc++;
    }

    if(uc<=lc)
    {
        for(int i=0;i<str.size();i++)
        {
            transform(str.begin(),str.end(),str.begin(),::tolower);
        }
    }
    else{
        for(int i=0;i<str.size();i++)
        {
            transform(str.begin(),str.end(),str.begin(),::toupper);
        }
    }

    cout<<str<<endl;
    return 0;
}
