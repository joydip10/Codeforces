#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    IOS
    char s[1000];
    char t[1000];
    cin>>s>>t;
    int check=0;
    if(strlen(s) != strlen(t))
    {
        cout<<"No"<<endl;
        return 0;
    }
    for(int i =0;i<strlen(s);i++)
    {
        if(s[i]=='a' || s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u')
        {
            if(t[i]=='a' || t[i]=='e'|| t[i]=='i'|| t[i]=='o'|| t[i]=='u')
            {
                check=1;
            }
            else
            {
                check=0;
                break;
            }
        }
        if(s[i]!='a' || s[i]!='e'|| s[i]!='i'|| s[i]!='o'|| s[i]!='u')
        {
            if(t[i]!='a' || t[i]!='e'|| t[i]!='i'|| t[i]!='o'|| t[i]!='u')
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

    int p=strlen(s)-1;
    int q=strlen(t)-1;

        if((s[p]=='a' || s[p]=='e'|| s[p]=='i'|| s[p]=='o'|| s[p]=='u')&&(t[p]!='a' || t[p]!='e'|| t[p]!='i'|| t[p]!='o'|| t[p]!='u'))
        {
                check=0;
                cout<<"No"<<endl;
                return 0;

        }
        if((s[p]!='a' || s[p]!='e'|| s[p]!='i'|| s[p]!='o'|| s[p]!='u')&&((t[p]=='a' || t[p]=='e'|| t[p]=='i'|| t[p]=='o'|| t[p]=='u')))
        {
                check=0;
                cout<<"No"<<endl;
                return 0;
            }



    if(check==1)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
   return 0;
}
