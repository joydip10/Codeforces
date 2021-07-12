#include<bits/stdc++.h>

using namespace std;

int main()
{
    int p,q;
    cin>>p>>q;
    int cnt=0;
    while(p<=q)
    {
        p=p*3;
        q=q*2;
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
