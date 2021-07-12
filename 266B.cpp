#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    string line, str;
    cin>>n>>t;
    cin>>str;
    while(t--)
    {
        for(int i =0;i<str.size();i++)
        {
            if(str[i]=='B' && str[i+1]=='G')
            {
                str[i]='G';
                str[i+1]='B';
                i++;
            }
        }
    }
    cout<<str<<endl;
    return 0;
}
