#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;
ll arr[200005];
int main()
{
    IOS
    ll  n,k;
    ll sum=0;
    string s;
    cin>>n>>k;

    priority_queue <int> p;
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>s;
    for(int i =0;i<n;)
    {
        int j=i;
        while(j<n && s[j]==s[i]){
            p.push(arr[j]);
            j++;
        }
        i =j;
        for(int i =0;i<k;i++)
        {
            if(p.empty()) break;
            sum+=p.top();
            p.pop();
        }
        while(!p.empty())
        {
            p.pop();
        }
    }
    cout<<sum<<endl;
    return 0;
}
