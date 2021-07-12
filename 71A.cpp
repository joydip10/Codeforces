#include<bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    string str;
    cin>>num;
    while(num--)
    {
        cin>>str;
        transform(str.begin(),str.end(),str.begin(),::tolower);
        if(str.size()>10)
        {
            cout<<str[0]<<(str.size()-2)<<str[str.size()-1]<<endl;
        }
        else cout<<str<<endl;
    }
    return 0;
}
