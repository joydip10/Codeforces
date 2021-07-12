#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;

int main()
{

    IOS
    ll check=1;
    ll n[3],a[3];
    ll p;
    for(int i =0;i<3;i++)
    {
        cin>>n[i];
    }
    for(int i =0;i<3;i++)
    {
        cin>>a[i];
    }
    p=a[0]-n[0];
    if(p>=0) check=1;
    else {
            check =0;
            cout<<"NO"<<endl;
            return 0;
    }
    p=(p+a[1])-n[1];
    if(p>=0) check=1;
    else
    {
        check=0;
        cout<<"NO"<<endl;
        return 0;
    }
    p=(p+a[2])-n[2];
    if(p>=0) check=1;
    else
    {
        check =0;
        cout<<"NO"<<endl;
        return 0;
    }

    if(check==1)
    {
        cout<<"YES"<<endl;
    }
    return 0;
}
