#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test,value=0;
    string str;
    cin>>test;
    while(test--)
    {
        cin>>str;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='+'){
                value++;
                break;
            }
            else if(str[i]=='-'){
                value--;
                break;
            }
        }
    }
    cout<<value<<endl;
    return 0;
}
