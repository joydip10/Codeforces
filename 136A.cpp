#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<int,int> mp,kp;

    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        int val;
        cin>>val;
        mp[i]=val;
        kp[val]=i;
    }

    for(int i=1;i<=n;i++)
    {
        cout<<kp[i]<<" ";
    }
    cout<<endl;
    return 0;
}
