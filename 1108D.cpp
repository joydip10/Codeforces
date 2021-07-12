#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    IOS
    long long int num;
    string s;
    cin>>num;
    cin>>s;
        long long int coun=0;
        for(long long int i=1;i<s.size();i++)
        {
            //logic=1
            if(s[i-1]=='R' && s[i+1]=='B' && (s[i]==s[i-1]))
            {
                coun++;
                s[i]='G';
            }
            if(s[i-1]=='R' && s[i+1]=='G' && (s[i]==s[i-1]))
            {
                coun++;
                s[i]='B';
            }
            if(s[i-1]=='B' && s[i+1]=='R' && (s[i]==s[i-1]))
            {
                coun++;
                s[i]='G';
            }
            if(s[i-1]=='B' && s[i+1]=='G' && s[i]==s[i-1])
            {
                coun++;
                s[i]='R';
            }
            if(s[i-1]=='G' && s[i+1]=='B' &&  s[i]==s[i-1])
            {
                coun++;
                s[i]='R';
            }
            if(s[i-1]=='G' && s[i+1]=='R' && s[i]==s[i-1])
            {
                coun++;
                s[i]='B';
            }
            if((s[i-1]=='R' && s[i+1]=='R') && s[i]==s[i-1])
            {
                coun++;
                s[i]='B';
            }
            if((s[i-1]=='B' && s[i+1]=='B') && s[i]==s[i-1] )
            {
                coun++;
                s[i]='G';
            }
            if((s[i-1]=='G' && s[i+1]=='G') && s[i]==s[i-1] )
            {
                coun++;
                s[i]='R';
            }
            if((s[i-1]=='R' && i+1==num) && s[i]==s[i-1])
            {
                coun++;
                s[i]='B';
            }
            if((s[i-1]=='B' && i+1==num) && s[i]==s[i-1] )
            {
                coun++;
                s[i]='G';
            }
            if((s[i-1]=='G' && i+1==num) && s[i]==s[i-1] )
            {
                coun++;
                s[i]='R';
            }

        }
        cout<<coun<<endl;
        cout<<s<<endl;

    return 0;
}
