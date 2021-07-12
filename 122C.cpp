#include <iostream>
#include <string>
#include<bits/stdc++.h>

using namespace std;
vector <string> vec;
vector <int> vecint;
int main ()
{
    for(int i =1;i<800;i++)
    {
        stringstream ss;
        ss << i;
        string s= ss.str();
        int check=1;
        for(int p =0;p<s.size();p++)
        {
            if(s[p]=='4' || s[p]=='7')
            {
                check=0;
            }
            else
            {
                check=1;
                break;
            }
        }
        if(check==0)
        {
            vec.push_back(s);
        }

    }
    int input;
    cin>>input;
    int chk=0;
    for(int i =0;i<vec.size();i++)
    {
        stringstream ss(vec[i]);
        int num;
        ss>>num;
        if(input%num ==0)
        {
            chk=1;
            break;
        }
    }
    if(chk==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
