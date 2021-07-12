#include<bits/stdc++.h>

using namespace std;

int main()
{
    bool vis[26]={false};
    map<char,int> mp;
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        mp[str[i]]++;
    }
    int cnt=0;
    for(int i=0;i<str.size();i++)
    {
        if(vis[str[i]-'a']==false)
        {
            vis[str[i]-'a']=true;
            if(mp[str[i]]>=1)
            {
                cnt++;
            }
        }
    }

    if(cnt%2==0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
    return 0;
}
