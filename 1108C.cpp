#include<iostream>
#include<string.h>
using namespace std;
int n,coun=0,mn=99999999,flag;
string s;
int main()
{
    cin>>n;
    cin>>s;
    //loop1
    for(int i=0;i<s.size();i++)
    {
        if(i%3==0 && s[i]=='R')
        {
            coun++;
        }
        if(i%3==1 && s[i]=='G')
        {
            coun++;
        }
        if(i%3==2 && s[i]=='B')
        {
            coun++;
        }
    }
    if(n-coun<mn)
    {
        flag=1;
        mn=n-coun;
    }
    coun=0;
    //loop2
    for(int i=0;i<s.size();i++)
    {
        if(i%3==0 && s[i]=='R')
        {
            coun++;
        }
        if(i%3==1 && s[i]=='B')
        {
            coun++;
        }
        if(i%3==2 && s[i]=='G')
        {
            coun++;
        }
    }
    if(n-coun<mn)
    {
        flag=2;
        mn=n-coun;
    }
    coun=0;
    //loop3
    for(int i=0;i<s.size();i++)
    {
        if(i%3==0 && s[i]=='B')
        {
            coun++;
        }
        if(i%3==1 && s[i]=='G')
        {
            coun++;
        }
        if(i%3==2 && s[i]=='R')
        {
            coun++;
        }
    }
    if(n-coun<mn)
    {
        flag=3;
        mn=n-coun;
    }
    coun=0;
    //loop4
    for(int i=0;i<s.size();i++)
    {
        if(i%3==0 && s[i]=='B')
        {
            coun++;
        }
        if(i%3==1 && s[i]=='R')
        {
            coun++;
        }
        if(i%3==2 && s[i]=='G')
        {
            coun++;
        }
    }
    if(n-coun<mn)
    {
        flag=4;
        mn=n-coun;
    }
    coun=0;
    //loop5
    for(int i=0;i<s.size();i++)
    {
        if(i%3==0 && s[i]=='G')
        {
            coun++;
        }
        if(i%3==1 && s[i]=='R')
        {
            coun++;
        }
        if(i%3==2 && s[i]=='B')
        {
            coun++;
        }
    }
    if(n-coun<mn)
    {
        flag=5;
        mn=n-coun;
    }
    coun=0;
    //loop6
    for(int i=0;i<s.size();i++)
    {
        if(i%3==0 && s[i]=='G')
        {
            coun++;
        }
        if(i%3==1 && s[i]=='B')
        {
            coun++;
        }
        if(i%3==2 && s[i]=='R')
        {
            coun++;
        }
    }
    if(n-coun<mn)
    {
        flag=6;
        mn=n-coun;
    }
    cout<<mn<<endl;
    if(flag==1)
    {
        for(int i=0;i<n;i++)
        {
            if(i%3==0) cout<<'R';
            if(i%3==1) cout<<'G';
            if(i%3==2) cout<<'B';
        }
        cout<<endl;
    }
    if(flag==2)
    {
        for(int i=0;i<n;i++)
        {
            if(i%3==0) cout<<'R';
            if(i%3==1) cout<<'B';
            if(i%3==2) cout<<'G';
        }
        cout<<endl;
    }
    if(flag==3)
    {
        for(int i=0;i<n;i++)
        {
            if(i%3==0) cout<<'B';
            if(i%3==1) cout<<'G';
            if(i%3==2) cout<<'R';
        }
        cout<<endl;
    }
    if(flag==4)
    {
        for(int i=0;i<n;i++)
        {
            if(i%3==0) cout<<'B';
            if(i%3==1) cout<<'R';
            if(i%3==2) cout<<'G';
        }
        cout<<endl;
    }
    if(flag==5)
    {
        for(int i=0;i<n;i++)
        {
            if(i%3==0) cout<<'G';
            if(i%3==1) cout<<'R';
            if(i%3==2) cout<<'B';
        }
        cout<<endl;
    }
    if(flag==6)
    {
        for(int i=0;i<n;i++)
        {
            if(i%3==0) cout<<'G';
            if(i%3==1) cout<<'B';
            if(i%3==2) cout<<'R';
        }
        cout<<endl;
    }
    return 0;}
