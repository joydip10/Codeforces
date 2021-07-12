#include<bits/stdc++.h>
using namespace std;
int main()
{
    char strr[150];
    cin>>strr;
    int ch=0,ce=0,cl1=0,cl2=0,co=0;
    for(int i =0;i<strlen(strr);i++)
    {
        if(ch==0 && strr[i]=='h')
        {
            ch=1;
        }
        else if(ch==1 && strr[i]=='e' && ce==0)
        {
            ce=1;
        }
        else if(ch==1 && ce==1 && strr[i]=='l' && cl1==0)
        {
            cl1=1;
        }
        else if(ch==1 && ce==1 && cl1==1 && strr[i]=='l' && cl2==0)
        {
            cl2=1;
        }
        else if(ch==1 && ce==1 && cl1==1 && cl2==1 && strr[i]=='o' && co==0)
        {
            co=1;
        }
        else continue;
    }
    if(ch==1 && ce==1 && cl1==1 && cl2==1 && co==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
