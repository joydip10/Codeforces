#include<bits/stdc++.h>
using namespace std;
int main()
{
    int counter[26]={0};
    string str;
    cin>>str;
    for(int i =0;i<str.size();i++)
    {
        int charValue=(int)str[i];
        if(charValue>=65 && charValue<=90)
        {
            counter[charValue-65]++;
        }
        if(charValue>=97 && charValue<=122)
        {
            counter[charValue-97]++;
        }
    }
    for(int i =0;i<26;i++)
    {
        int iter=i+65;
        char character=(char)iter;
        cout<<character<<"= "<<counter[i]<<endl;
    }
    return 0;
}
