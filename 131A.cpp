#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int check=0;
    if(str[0]>='a' && str[0]<='z')
    {
        for(int i = 1; i<str.size(); i++)
        {
            if(str[i]>='A' && str[i]<='Z')
            {
                check=1;
            }
            else
            {
                check=0;
                break;
            }
        }
    }
    if(str[0]>='A' && str[0]<='Z')
    {
        for(int i = 1; i<str.size(); i++){
        if(str[i]>='A' && str[i]<='Z')
        {
            check==2;
        }
        else
        {
            check=0;
            break;
        }
        }
    }
    if(check == 0 && str.size()!=1){
            cout<<str<<endl;
    }
    if(check==1 && str.size()!=1)
    {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        str[0]=toupper(str[0]);
        cout<<str<<endl;
    }
    if(check==2 && str.size()!=1)
    {
        transform(str.begin(),str.end(),str.begin(),::tolower);
        cout<<str<<endl;
    }
    if(str.size()==1)
    {
        str[0]=toupper(str[0]);
        cout<<str<<endl;
    }
    return 0;
}
