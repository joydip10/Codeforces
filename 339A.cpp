#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    vector<int> vec;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]-'0'>=0 && str[i]-'0'<=9)
        {
            vec.push_back(str[i]-'0');
        }
    }

    sort(vec.begin(),vec.end());

    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i];
        if(i!=vec.size()-1)
        {
            cout<<"+";
        }
    }
    cout<<endl;
    return 0;
}
