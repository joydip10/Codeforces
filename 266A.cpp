#include<bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    cin>>num;
    string str;
    cin>>str;
    int cnt=0;
    int j;
    for(int i=0;i<str.size()-1;i++)
    {
        while(str[i]==str[i+1])
        {
            cnt++;
            i++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
